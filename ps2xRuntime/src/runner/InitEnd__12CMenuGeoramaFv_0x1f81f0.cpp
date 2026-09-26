#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEnd__12CMenuGeoramaFv
// Address: 0x1f81f0 - 0x1f8760
void InitEnd__12CMenuGeoramaFv_0x1f81f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEnd__12CMenuGeoramaFv_0x1f81f0");
#endif

    switch (ctx->pc) {
        case 0x1f820cu: goto label_1f820c;
        case 0x1f821cu: goto label_1f821c;
        case 0x1f8224u: goto label_1f8224;
        case 0x1f823cu: goto label_1f823c;
        case 0x1f8260u: goto label_1f8260;
        case 0x1f8274u: goto label_1f8274;
        case 0x1f8290u: goto label_1f8290;
        case 0x1f8298u: goto label_1f8298;
        case 0x1f82b0u: goto label_1f82b0;
        case 0x1f82b8u: goto label_1f82b8;
        case 0x1f82ccu: goto label_1f82cc;
        case 0x1f82d4u: goto label_1f82d4;
        case 0x1f82e8u: goto label_1f82e8;
        case 0x1f8308u: goto label_1f8308;
        case 0x1f8310u: goto label_1f8310;
        case 0x1f8334u: goto label_1f8334;
        case 0x1f8360u: goto label_1f8360;
        case 0x1f8368u: goto label_1f8368;
        case 0x1f8398u: goto label_1f8398;
        case 0x1f83c4u: goto label_1f83c4;
        case 0x1f83dcu: goto label_1f83dc;
        case 0x1f8494u: goto label_1f8494;
        case 0x1f84a4u: goto label_1f84a4;
        case 0x1f84b4u: goto label_1f84b4;
        case 0x1f8524u: goto label_1f8524;
        case 0x1f8540u: goto label_1f8540;
        case 0x1f8550u: goto label_1f8550;
        case 0x1f8580u: goto label_1f8580;
        case 0x1f859cu: goto label_1f859c;
        case 0x1f8608u: goto label_1f8608;
        case 0x1f861cu: goto label_1f861c;
        case 0x1f8648u: goto label_1f8648;
        case 0x1f8668u: goto label_1f8668;
        case 0x1f8678u: goto label_1f8678;
        case 0x1f8680u: goto label_1f8680;
        case 0x1f86b8u: goto label_1f86b8;
        case 0x1f86e4u: goto label_1f86e4;
        case 0x1f8708u: goto label_1f8708;
        case 0x1f8718u: goto label_1f8718;
        case 0x1f8748u: goto label_1f8748;
        default: break;
    }

    ctx->pc = 0x1f81f0u;

    // 0x1f81f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f81f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f81f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f81f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f81f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f81f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f81fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f81fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f8200: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f8200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8204: 0xc07e6bc  jal         func_1F9AF0
    ctx->pc = 0x1F8204u;
    SET_GPR_U32(ctx, 31, 0x1F820Cu);
    ctx->pc = 0x1F8208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8204u;
            // 0x1f8208: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9AF0u;
    if (runtime->hasFunction(0x1F9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F820Cu; }
        if (ctx->pc != 0x1F820Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachFormInfo__12CMenuGeoramaFv_0x1f9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F820Cu; }
        if (ctx->pc != 0x1F820Cu) { return; }
    }
    ctx->pc = 0x1F820Cu;
label_1f820c:
    // 0x1f820c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f820cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f8210: 0x3421b7c4  ori         $at, $at, 0xB7C4
    ctx->pc = 0x1f8210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47044);
    // 0x1f8214: 0xc087d84  jal         func_21F610
    ctx->pc = 0x1F8214u;
    SET_GPR_U32(ctx, 31, 0x1F821Cu);
    ctx->pc = 0x1F8218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8214u;
            // 0x1f8218: 0x2412021  addu        $a0, $s2, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F610u;
    if (runtime->hasFunction(0x21F610u)) {
        auto targetFn = runtime->lookupFunction(0x21F610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F821Cu; }
        if (ctx->pc != 0x1F821Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_MENUFORM_MAKEBRD_INFO__FP21MENUFORM_MAKEBRD_INFO_0x21f610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F821Cu; }
        if (ctx->pc != 0x1F821Cu) { return; }
    }
    ctx->pc = 0x1F821Cu;
label_1f821c:
    // 0x1f821c: 0xc05231c  jal         func_148C70
    ctx->pc = 0x1F821Cu;
    SET_GPR_U32(ctx, 31, 0x1F8224u);
    ctx->pc = 0x1F8220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F821Cu;
            // 0x1f8220: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8224u; }
        if (ctx->pc != 0x1F8224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8224u; }
        if (ctx->pc != 0x1F8224u) { return; }
    }
    ctx->pc = 0x1F8224u;
label_1f8224:
    // 0x1f8224: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x1f8224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1f8228: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f8228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f822c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f822cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8230: 0x24a58a80  addiu       $a1, $a1, -0x7580
    ctx->pc = 0x1f8230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937216));
    // 0x1f8234: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1F8234u;
    SET_GPR_U32(ctx, 31, 0x1F823Cu);
    ctx->pc = 0x1F8238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8234u;
            // 0x1f8238: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F823Cu; }
        if (ctx->pc != 0x1F823Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F823Cu; }
        if (ctx->pc != 0x1F823Cu) { return; }
    }
    ctx->pc = 0x1F823Cu;
label_1f823c:
    // 0x1f823c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f823cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8240: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1f8240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1f8244: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1f8244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f8248: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1f8248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1f824c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f824cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8250: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f8250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8254: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x1f8254u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1f8258: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1F8258u;
    SET_GPR_U32(ctx, 31, 0x1F8260u);
    ctx->pc = 0x1F825Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8258u;
            // 0x1f825c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8260u; }
        if (ctx->pc != 0x1F8260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8260u; }
        if (ctx->pc != 0x1F8260u) { return; }
    }
    ctx->pc = 0x1F8260u;
label_1f8260:
    // 0x1f8260: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1f8260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1f8264: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f8264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f8268: 0x24a58a88  addiu       $a1, $a1, -0x7578
    ctx->pc = 0x1f8268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937224));
    // 0x1f826c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1F826Cu;
    SET_GPR_U32(ctx, 31, 0x1F8274u);
    ctx->pc = 0x1F8270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F826Cu;
            // 0x1f8270: 0x2646000c  addiu       $a2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8274u; }
        if (ctx->pc != 0x1F8274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8274u; }
        if (ctx->pc != 0x1F8274u) { return; }
    }
    ctx->pc = 0x1F8274u;
label_1f8274:
    // 0x1f8274: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f8274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f8278: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f8278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f827c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f827cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f8280: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f8280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f8284: 0x8c26d624  lw          $a2, -0x29DC($at)
    ctx->pc = 0x1f8284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x1f8288: 0xc08aa58  jal         func_22A960
    ctx->pc = 0x1F8288u;
    SET_GPR_U32(ctx, 31, 0x1F8290u);
    ctx->pc = 0x1F828Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8288u;
            // 0x1f828c: 0x24a58a30  addiu       $a1, $a1, -0x75D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A960u;
    if (runtime->hasFunction(0x22A960u)) {
        auto targetFn = runtime->lookupFunction(0x22A960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8290u; }
        if (ctx->pc != 0x1F8290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetTextureBlockNo__14CPosDataManageFPci_0x22a960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8290u; }
        if (ctx->pc != 0x1F8290u) { return; }
    }
    ctx->pc = 0x1F8290u;
label_1f8290:
    // 0x1f8290: 0xc08aa80  jal         func_22AA00
    ctx->pc = 0x1F8290u;
    SET_GPR_U32(ctx, 31, 0x1F8298u);
    ctx->pc = 0x1F8294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8290u;
            // 0x1f8294: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AA00u;
    if (runtime->hasFunction(0x22AA00u)) {
        auto targetFn = runtime->lookupFunction(0x22AA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8298u; }
        if (ctx->pc != 0x1F8298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetTextureInfoAll__14CPosDataManageFv_0x22aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8298u; }
        if (ctx->pc != 0x1F8298u) { return; }
    }
    ctx->pc = 0x1F8298u;
label_1f8298:
    // 0x1f8298: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1f8298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1f829c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f829cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f82a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f82a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f82a4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1f82a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1f82a8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1F82A8u;
    SET_GPR_U32(ctx, 31, 0x1F82B0u);
    ctx->pc = 0x1F82ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F82A8u;
            // 0x1f82ac: 0x24a58a98  addiu       $a1, $a1, -0x7568 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82B0u; }
        if (ctx->pc != 0x1F82B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82B0u; }
        if (ctx->pc != 0x1F82B0u) { return; }
    }
    ctx->pc = 0x1F82B0u;
label_1f82b0:
    // 0x1f82b0: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x1F82B0u;
    SET_GPR_U32(ctx, 31, 0x1F82B8u);
    ctx->pc = 0x1F82B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F82B0u;
            // 0x1f82b4: 0xaf829020  sw          $v0, -0x6FE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82B8u; }
        if (ctx->pc != 0x1F82B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82B8u; }
        if (ctx->pc != 0x1F82B8u) { return; }
    }
    ctx->pc = 0x1F82B8u;
label_1f82b8:
    // 0x1f82b8: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1f82b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1f82bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f82bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f82c0: 0x24a58aa0  addiu       $a1, $a1, -0x7560
    ctx->pc = 0x1f82c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937248));
    // 0x1f82c4: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1F82C4u;
    SET_GPR_U32(ctx, 31, 0x1F82CCu);
    ctx->pc = 0x1F82C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F82C4u;
            // 0x1f82c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82CCu; }
        if (ctx->pc != 0x1F82CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82CCu; }
        if (ctx->pc != 0x1F82CCu) { return; }
    }
    ctx->pc = 0x1F82CCu;
label_1f82cc:
    // 0x1f82cc: 0xc065a18  jal         func_196860
    ctx->pc = 0x1F82CCu;
    SET_GPR_U32(ctx, 31, 0x1F82D4u);
    ctx->pc = 0x1F82D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F82CCu;
            // 0x1f82d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82D4u; }
        if (ctx->pc != 0x1F82D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82D4u; }
        if (ctx->pc != 0x1F82D4u) { return; }
    }
    ctx->pc = 0x1F82D4u;
label_1f82d4:
    // 0x1f82d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f82d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f82d8: 0xac30e3ac  sw          $s0, -0x1C54($at)
    ctx->pc = 0x1f82d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960044), GPR_U32(ctx, 16));
    // 0x1f82dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f82dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f82e0: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x1F82E0u;
    SET_GPR_U32(ctx, 31, 0x1F82E8u);
    ctx->pc = 0x1F82E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F82E0u;
            // 0x1f82e4: 0xac22e3a8  sw          $v0, -0x1C58($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82E8u; }
        if (ctx->pc != 0x1F82E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F82E8u; }
        if (ctx->pc != 0x1F82E8u) { return; }
    }
    ctx->pc = 0x1F82E8u;
label_1f82e8:
    // 0x1f82e8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f82e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f82ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f82ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f82f0: 0xac22e3b8  sw          $v0, -0x1C48($at)
    ctx->pc = 0x1f82f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960056), GPR_U32(ctx, 2));
    // 0x1f82f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f82f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f82f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f82f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f82fc: 0x24a58ab0  addiu       $a1, $a1, -0x7550
    ctx->pc = 0x1f82fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937264));
    // 0x1f8300: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1F8300u;
    SET_GPR_U32(ctx, 31, 0x1F8308u);
    ctx->pc = 0x1F8304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8300u;
            // 0x1f8304: 0xac20e3bc  sw          $zero, -0x1C44($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960060), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8308u; }
        if (ctx->pc != 0x1F8308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8308u; }
        if (ctx->pc != 0x1F8308u) { return; }
    }
    ctx->pc = 0x1F8308u;
label_1f8308:
    // 0x1f8308: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f8308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f830c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f830cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8310:
    // 0x1f8310: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f8310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f8314: 0x278281a8  addiu       $v0, $gp, -0x7E58
    ctx->pc = 0x1f8314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934952));
    // 0x1f8318: 0x24639460  addiu       $v1, $v1, -0x6BA0
    ctx->pc = 0x1f8318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939744));
    // 0x1f831c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f831cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f8320: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f8320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f8324: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1f8324u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8328: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f8328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f832c: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x1F832Cu;
    SET_GPR_U32(ctx, 31, 0x1F8334u);
    ctx->pc = 0x1F8330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F832Cu;
            // 0x1f8330: 0x244505dc  addiu       $a1, $v0, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8334u; }
        if (ctx->pc != 0x1F8334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8334u; }
        if (ctx->pc != 0x1F8334u) { return; }
    }
    ctx->pc = 0x1F8334u;
label_1f8334:
    // 0x1f8334: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f8334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f8338: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1f8338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f833c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F833Cu;
    {
        const bool branch_taken_0x1f833c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F833Cu;
            // 0x1f8340: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f833c) {
            ctx->pc = 0x1F8310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8310;
        }
    }
    ctx->pc = 0x1F8344u;
    // 0x1f8344: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8348: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1f8348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f834c: 0xa3839040  sb          $v1, -0x6FC0($gp)
    ctx->pc = 0x1f834cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938688), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8350: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1f8350u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1f8354: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f8354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f8358: 0xc08abbc  jal         func_22AEF0
    ctx->pc = 0x1F8358u;
    SET_GPR_U32(ctx, 31, 0x1F8360u);
    ctx->pc = 0x1F835Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8358u;
            // 0x1f835c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AEF0u;
    if (runtime->hasFunction(0x22AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x22AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8360u; }
        if (ctx->pc != 0x1F8360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFi_0x22aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8360u; }
        if (ctx->pc != 0x1F8360u) { return; }
    }
    ctx->pc = 0x1F8360u;
label_1f8360:
    // 0x1f8360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8364: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f8364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8368:
    // 0x1f8368: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f8368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f836c: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x1f836cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f8370: 0x28a30046  slti        $v1, $a1, 0x46
    ctx->pc = 0x1f8370u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x1f8374: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1f8374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1f8378: 0x0  nop
    ctx->pc = 0x1f8378u;
    // NOP
    // 0x1f837c: 0x0  nop
    ctx->pc = 0x1f837cu;
    // NOP
    // 0x1f8380: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F8380u;
    {
        const bool branch_taken_0x1f8380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8380) {
            ctx->pc = 0x1F8368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8368;
        }
    }
    ctx->pc = 0x1F8388u;
    // 0x1f8388: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f8388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f838c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f838cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8390: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1F8390u;
    SET_GPR_U32(ctx, 31, 0x1F8398u);
    ctx->pc = 0x1F8394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8390u;
            // 0x1f8394: 0x24a58ac0  addiu       $a1, $a1, -0x7540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8398u; }
        if (ctx->pc != 0x1F8398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8398u; }
        if (ctx->pc != 0x1F8398u) { return; }
    }
    ctx->pc = 0x1F8398u;
label_1f8398:
    // 0x1f8398: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f8398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f839c: 0x3442b834  ori         $v0, $v0, 0xB834
    ctx->pc = 0x1f839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47156);
    // 0x1f83a0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f83a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f83a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f83a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f83a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F83A8u;
    {
        const bool branch_taken_0x1f83a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f83a8) {
            ctx->pc = 0x1F83DCu;
            goto label_1f83dc;
        }
    }
    ctx->pc = 0x1F83B0u;
    // 0x1f83b0: 0x8e460140  lw          $a2, 0x140($s2)
    ctx->pc = 0x1f83b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x1f83b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f83b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f83b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f83b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f83bc: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1F83BCu;
    SET_GPR_U32(ctx, 31, 0x1F83C4u);
    ctx->pc = 0x1F83C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F83BCu;
            // 0x1f83c0: 0x24a58ad0  addiu       $a1, $a1, -0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F83C4u; }
        if (ctx->pc != 0x1F83C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F83C4u; }
        if (ctx->pc != 0x1F83C4u) { return; }
    }
    ctx->pc = 0x1F83C4u;
label_1f83c4:
    // 0x1f83c4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f83c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f83c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1f83c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f83cc: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f83ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1f83d0: 0x8c24b834  lw          $a0, -0x47CC($at)
    ctx->pc = 0x1f83d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948916)));
    // 0x1f83d4: 0xc08968c  jal         func_225A30
    ctx->pc = 0x1F83D4u;
    SET_GPR_U32(ctx, 31, 0x1F83DCu);
    ctx->pc = 0x1F83D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F83D4u;
            // 0x1f83d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F83DCu; }
        if (ctx->pc != 0x1F83DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F83DCu; }
        if (ctx->pc != 0x1F83DCu) { return; }
    }
    ctx->pc = 0x1F83DCu;
label_1f83dc:
    // 0x1f83dc: 0x8f848300  lw          $a0, -0x7D00($gp)
    ctx->pc = 0x1f83dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
    // 0x1f83e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f83e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f83e4: 0x14830036  bne         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1F83E4u;
    {
        const bool branch_taken_0x1f83e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F83E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F83E4u;
            // 0x1f83e8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83e4) {
            ctx->pc = 0x1F84C0u;
            goto label_1f84c0;
        }
    }
    ctx->pc = 0x1F83ECu;
    // 0x1f83ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f83ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f83f0: 0x8c22d648  lw          $v0, -0x29B8($at)
    ctx->pc = 0x1f83f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956616)));
    // 0x1f83f4: 0x4400031  bltz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1F83F4u;
    {
        const bool branch_taken_0x1f83f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F83F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F83F4u;
            // 0x1f83f8: 0x3402bbb8  ori         $v0, $zero, 0xBBB8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48056);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83f4) {
            ctx->pc = 0x1F84BCu;
            goto label_1f84bc;
        }
    }
    ctx->pc = 0x1F83FCu;
    // 0x1f83fc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f8400: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f8400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8404: 0x1840002d  blez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F8404u;
    {
        const bool branch_taken_0x1f8404 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F8408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8404u;
            // 0x1f8408: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8404) {
            ctx->pc = 0x1F84BCu;
            goto label_1f84bc;
        }
    }
    ctx->pc = 0x1F840Cu;
    // 0x1f840c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f840cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8410: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f8410u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1f8414: 0xac20b8f4  sw          $zero, -0x470C($at)
    ctx->pc = 0x1f8414u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949108), GPR_U32(ctx, 0));
    // 0x1f8418: 0xa6430014  sh          $v1, 0x14($s2)
    ctx->pc = 0x1f8418u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f841c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f841cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f8420: 0xae420148  sw          $v0, 0x148($s2)
    ctx->pc = 0x1f8420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 2));
    // 0x1f8424: 0x8e420148  lw          $v0, 0x148($s2)
    ctx->pc = 0x1f8424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x1f8428: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f8428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f842c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f8430: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f8430u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f8434: 0x8c22b7f4  lw          $v0, -0x480C($at)
    ctx->pc = 0x1f8434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948852)));
    // 0x1f8438: 0xae420154  sw          $v0, 0x154($s2)
    ctx->pc = 0x1f8438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
    // 0x1f843c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f843cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f8440: 0x8e420148  lw          $v0, 0x148($s2)
    ctx->pc = 0x1f8440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x1f8444: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f8444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f8448: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f8448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f844c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f844cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f8450: 0x8c22b7f8  lw          $v0, -0x4808($at)
    ctx->pc = 0x1f8450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948856)));
    // 0x1f8454: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f8454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f8458: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x1f8458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x1f845c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f845cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1f8460: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x1f8460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x1f8464: 0x8c23bbb8  lw          $v1, -0x4448($at)
    ctx->pc = 0x1f8464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x1f8468: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1f8468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f846c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F846Cu;
    {
        const bool branch_taken_0x1f846c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F846Cu;
            // 0x1f8470: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f846c) {
            ctx->pc = 0x1F8478u;
            goto label_1f8478;
        }
    }
    ctx->pc = 0x1F8474u;
    // 0x1f8474: 0xae430154  sw          $v1, 0x154($s2)
    ctx->pc = 0x1f8474u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 3));
label_1f8478:
    // 0x1f8478: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f8478u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1f847c: 0x8c22bbb8  lw          $v0, -0x4448($at)
    ctx->pc = 0x1f847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
    // 0x1f8480: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8480u;
    {
        const bool branch_taken_0x1f8480 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1F8484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8480u;
            // 0x1f8484: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8480) {
            ctx->pc = 0x1F848Cu;
            goto label_1f848c;
        }
    }
    ctx->pc = 0x1F8488u;
    // 0x1f8488: 0xa6400014  sh          $zero, 0x14($s2)
    ctx->pc = 0x1f8488u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 0));
label_1f848c:
    // 0x1f848c: 0xc07e564  jal         func_1F9590
    ctx->pc = 0x1F848Cu;
    SET_GPR_U32(ctx, 31, 0x1F8494u);
    ctx->pc = 0x1F9590u;
    if (runtime->hasFunction(0x1F9590u)) {
        auto targetFn = runtime->lookupFunction(0x1F9590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8494u; }
        if (ctx->pc != 0x1F8494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowModeLoadPartsID__12CMenuGeoramaFv_0x1f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8494u; }
        if (ctx->pc != 0x1F8494u) { return; }
    }
    ctx->pc = 0x1F8494u;
label_1f8494:
    // 0x1f8494: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f8494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f8498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f849c: 0xc07e5b0  jal         func_1F96C0
    ctx->pc = 0x1F849Cu;
    SET_GPR_U32(ctx, 31, 0x1F84A4u);
    ctx->pc = 0x1F84A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F849Cu;
            // 0x1f84a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F96C0u;
    if (runtime->hasFunction(0x1F96C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F96C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F84A4u; }
        if (ctx->pc != 0x1F84A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGeoramaPart__12CMenuGeoramaFii_0x1f96c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F84A4u; }
        if (ctx->pc != 0x1F84A4u) { return; }
    }
    ctx->pc = 0x1F84A4u;
label_1f84a4:
    // 0x1f84a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f84a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f84a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f84a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f84ac: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1F84ACu;
    SET_GPR_U32(ctx, 31, 0x1F84B4u);
    ctx->pc = 0x1F84B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F84ACu;
            // 0x1f84b0: 0x24a58ad8  addiu       $a1, $a1, -0x7528 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F84B4u; }
        if (ctx->pc != 0x1F84B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F84B4u; }
        if (ctx->pc != 0x1F84B4u) { return; }
    }
    ctx->pc = 0x1F84B4u;
label_1f84b4:
    // 0x1f84b4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F84B4u;
    {
        const bool branch_taken_0x1f84b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F84B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F84B4u;
            // 0x1f84b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f84b4) {
            ctx->pc = 0x1F8554u;
            goto label_1f8554;
        }
    }
    ctx->pc = 0x1F84BCu;
label_1f84bc:
    // 0x1f84bc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f84c0:
    // 0x1f84c0: 0x1482001a  bne         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F84C0u;
    {
        const bool branch_taken_0x1f84c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F84C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F84C0u;
            // 0x1f84c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f84c0) {
            ctx->pc = 0x1F852Cu;
            goto label_1f852c;
        }
    }
    ctx->pc = 0x1F84C8u;
    // 0x1f84c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f84c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f84cc: 0xa6420014  sh          $v0, 0x14($s2)
    ctx->pc = 0x1f84ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f84d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f84d4: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x1f84d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
    // 0x1f84d8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f84d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f84dc: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x1f84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x1f84e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f84e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f84e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f84e8: 0x24a58ae8  addiu       $a1, $a1, -0x7518
    ctx->pc = 0x1f84e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937320));
    // 0x1f84ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f84ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f84f0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1f84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f84f4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1f84f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1f84f8: 0x8c23b7f4  lw          $v1, -0x480C($at)
    ctx->pc = 0x1f84f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948852)));
    // 0x1f84fc: 0xae430154  sw          $v1, 0x154($s2)
    ctx->pc = 0x1f84fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 3));
    // 0x1f8500: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f8500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f8504: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x1f8504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x1f8508: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f8508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f850c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1f850cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f8510: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1f8510u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1f8514: 0x8c23b7f8  lw          $v1, -0x4808($at)
    ctx->pc = 0x1f8514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948856)));
    // 0x1f8518: 0xae430150  sw          $v1, 0x150($s2)
    ctx->pc = 0x1f8518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 3));
    // 0x1f851c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1F851Cu;
    SET_GPR_U32(ctx, 31, 0x1F8524u);
    ctx->pc = 0x1F8520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F851Cu;
            // 0x1f8520: 0xae420168  sw          $v0, 0x168($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8524u; }
        if (ctx->pc != 0x1F8524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8524u; }
        if (ctx->pc != 0x1F8524u) { return; }
    }
    ctx->pc = 0x1F8524u;
label_1f8524:
    // 0x1f8524: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F8524u;
    {
        const bool branch_taken_0x1f8524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8524) {
            ctx->pc = 0x1F8550u;
            goto label_1f8550;
        }
    }
    ctx->pc = 0x1F852Cu;
label_1f852c:
    // 0x1f852c: 0xa6400014  sh          $zero, 0x14($s2)
    ctx->pc = 0x1f852cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f8530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8534: 0xae420148  sw          $v0, 0x148($s2)
    ctx->pc = 0x1f8534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 2));
    // 0x1f8538: 0xc07e564  jal         func_1F9590
    ctx->pc = 0x1F8538u;
    SET_GPR_U32(ctx, 31, 0x1F8540u);
    ctx->pc = 0x1F853Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8538u;
            // 0x1f853c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9590u;
    if (runtime->hasFunction(0x1F9590u)) {
        auto targetFn = runtime->lookupFunction(0x1F9590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8540u; }
        if (ctx->pc != 0x1F8540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowModeLoadPartsID__12CMenuGeoramaFv_0x1f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8540u; }
        if (ctx->pc != 0x1F8540u) { return; }
    }
    ctx->pc = 0x1F8540u;
label_1f8540:
    // 0x1f8540: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f8540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f8544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8548: 0xc07e5b0  jal         func_1F96C0
    ctx->pc = 0x1F8548u;
    SET_GPR_U32(ctx, 31, 0x1F8550u);
    ctx->pc = 0x1F854Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8548u;
            // 0x1f854c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F96C0u;
    if (runtime->hasFunction(0x1F96C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F96C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8550u; }
        if (ctx->pc != 0x1F8550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGeoramaPart__12CMenuGeoramaFii_0x1f96c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8550u; }
        if (ctx->pc != 0x1F8550u) { return; }
    }
    ctx->pc = 0x1F8550u;
label_1f8550:
    // 0x1f8550: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8554:
    // 0x1f8554: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f8554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f8558: 0xa3838fd4  sb          $v1, -0x702C($gp)
    ctx->pc = 0x1f8558u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938580), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f855c: 0x3442b8cc  ori         $v0, $v0, 0xB8CC
    ctx->pc = 0x1f855cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47308);
    // 0x1f8560: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1f8560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f8564: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f8564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f8568: 0x8e420148  lw          $v0, 0x148($s2)
    ctx->pc = 0x1f8568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x1f856c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f856cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f8570: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f8570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f8574: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f8574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8578: 0xc08a240  jal         func_228900
    ctx->pc = 0x1F8578u;
    SET_GPR_U32(ctx, 31, 0x1F8580u);
    ctx->pc = 0x1F857Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8578u;
            // 0x1f857c: 0x24a58af8  addiu       $a1, $a1, -0x7508 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8580u; }
        if (ctx->pc != 0x1F8580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8580u; }
        if (ctx->pc != 0x1F8580u) { return; }
    }
    ctx->pc = 0x1F8580u;
label_1f8580:
    // 0x1f8580: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f8580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8588: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f858c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1f858cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1f8590: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1f8590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1f8594: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1f8594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f8598: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f8598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f859c:
    // 0x1f859c: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1f859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f85a0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f85a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f85a4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f85a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f85a8: 0x8c22b8cc  lw          $v0, -0x4734($at)
    ctx->pc = 0x1f85a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949068)));
    // 0x1f85ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F85ACu;
    {
        const bool branch_taken_0x1f85ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f85ac) {
            ctx->pc = 0x1F85E0u;
            goto label_1f85e0;
        }
    }
    ctx->pc = 0x1F85B4u;
    // 0x1f85b4: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x1f85b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f85b8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f85b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f85bc: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x1f85bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1f85c0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f85c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f85c4: 0xc420b7f8  lwc1        $f0, -0x4808($at)
    ctx->pc = 0x1f85c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f85c8: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x1f85c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1f85cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f85ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f85d0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f85d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f85d4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f85d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f85d8: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x1f85d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1f85dc: 0xe420b898  swc1        $f0, -0x4768($at)
    ctx->pc = 0x1f85dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949016), bits); }
label_1f85e0:
    // 0x1f85e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f85e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f85e4: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x1f85e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f85e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1f85e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f85ec: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1F85ECu;
    {
        const bool branch_taken_0x1f85ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F85F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F85ECu;
            // 0x1f85f0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85ec) {
            ctx->pc = 0x1F859Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f859c;
        }
    }
    ctx->pc = 0x1F85F4u;
    // 0x1f85f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f85f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f85f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f85f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f85fc: 0xac22d648  sw          $v0, -0x29B8($at)
    ctx->pc = 0x1f85fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956616), GPR_U32(ctx, 2));
    // 0x1f8600: 0xc0aaa44  jal         func_2AA910
    ctx->pc = 0x1F8600u;
    SET_GPR_U32(ctx, 31, 0x1F8608u);
    ctx->pc = 0x1F8604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8600u;
            // 0x1f8604: 0x8e440140  lw          $a0, 0x140($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA910u;
    if (runtime->hasFunction(0x2AA910u)) {
        auto targetFn = runtime->lookupFunction(0x2AA910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8608u; }
        if (ctx->pc != 0x1F8608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaxPolyn__Fi_0x2aa910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8608u; }
        if (ctx->pc != 0x1F8608u) { return; }
    }
    ctx->pc = 0x1F8608u;
label_1f8608:
    // 0x1f8608: 0x8f848ff8  lw          $a0, -0x7008($gp)
    ctx->pc = 0x1f8608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
    // 0x1f860c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f860cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8614: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1F8614u;
    SET_GPR_U32(ctx, 31, 0x1F861Cu);
    ctx->pc = 0x1F8618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8614u;
            // 0x1f8618: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14F0u;
    if (runtime->hasFunction(0x1B14F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F861Cu; }
        if (ctx->pc != 0x1F861Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTotalPolyn__8CEditMapFPiPi_0x1b14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F861Cu; }
        if (ctx->pc != 0x1F861Cu) { return; }
    }
    ctx->pc = 0x1F861Cu;
label_1f861c:
    // 0x1f861c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1f861cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f8620: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f8620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f8624: 0xae420158  sw          $v0, 0x158($s2)
    ctx->pc = 0x1f8624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 2));
    // 0x1f8628: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f8628u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x1f862c: 0x8c24b834  lw          $a0, -0x47CC($at)
    ctx->pc = 0x1f862cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948916)));
    // 0x1f8630: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8630u;
    {
        const bool branch_taken_0x1f8630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8630) {
            ctx->pc = 0x1F8648u;
            goto label_1f8648;
        }
    }
    ctx->pc = 0x1F8638u;
    // 0x1f8638: 0x8e460158  lw          $a2, 0x158($s2)
    ctx->pc = 0x1f8638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x1f863c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f863cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f8640: 0xc089728  jal         func_225CA0
    ctx->pc = 0x1F8640u;
    SET_GPR_U32(ctx, 31, 0x1F8648u);
    ctx->pc = 0x1F8644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8640u;
            // 0x1f8644: 0x24a58b00  addiu       $a1, $a1, -0x7500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8648u; }
        if (ctx->pc != 0x1F8648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8648u; }
        if (ctx->pc != 0x1F8648u) { return; }
    }
    ctx->pc = 0x1F8648u;
label_1f8648:
    // 0x1f8648: 0x8e430140  lw          $v1, 0x140($s2)
    ctx->pc = 0x1f8648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x1f864c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8650: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8650u;
    {
        const bool branch_taken_0x1f8650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f8650) {
            ctx->pc = 0x1F8668u;
            goto label_1f8668;
        }
    }
    ctx->pc = 0x1F8658u;
    // 0x1f8658: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f8658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f865c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f865cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8660: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1F8660u;
    SET_GPR_U32(ctx, 31, 0x1F8668u);
    ctx->pc = 0x1F8664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8660u;
            // 0x1f8664: 0x24a58b10  addiu       $a1, $a1, -0x74F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8668u; }
        if (ctx->pc != 0x1F8668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8668u; }
        if (ctx->pc != 0x1F8668u) { return; }
    }
    ctx->pc = 0x1F8668u;
label_1f8668:
    // 0x1f8668: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f8668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f866c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f866cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8670: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1F8670u;
    SET_GPR_U32(ctx, 31, 0x1F8678u);
    ctx->pc = 0x1F8674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8670u;
            // 0x1f8674: 0x24a58b18  addiu       $a1, $a1, -0x74E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8678u; }
        if (ctx->pc != 0x1F8678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8678u; }
        if (ctx->pc != 0x1F8678u) { return; }
    }
    ctx->pc = 0x1F8678u;
label_1f8678:
    // 0x1f8678: 0xc07de08  jal         func_1F7820
    ctx->pc = 0x1F8678u;
    SET_GPR_U32(ctx, 31, 0x1F8680u);
    ctx->pc = 0x1F867Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8678u;
            // 0x1f867c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7820u;
    if (runtime->hasFunction(0x1F7820u)) {
        auto targetFn = runtime->lookupFunction(0x1F7820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8680u; }
        if (ctx->pc != 0x1F8680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuGeoramaMessageMake__Fi_0x1f7820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8680u; }
        if (ctx->pc != 0x1F8680u) { return; }
    }
    ctx->pc = 0x1F8680u;
label_1f8680:
    // 0x1f8680: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x1f8680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1f8684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8688: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8688u;
    {
        const bool branch_taken_0x1f8688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F868Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8688u;
            // 0x1f868c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8688) {
            ctx->pc = 0x1F86A4u;
            goto label_1f86a4;
        }
    }
    ctx->pc = 0x1F8690u;
    // 0x1f8690: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f8690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f8694: 0x8c23ca48  lw          $v1, -0x35B8($at)
    ctx->pc = 0x1f8694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x1f8698: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1f8698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1f869c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1f869cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1f86a0: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x1f86a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
label_1f86a4:
    // 0x1f86a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f86a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f86a8: 0x24a58b28  addiu       $a1, $a1, -0x74D8
    ctx->pc = 0x1f86a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937384));
    // 0x1f86ac: 0xa3808fd8  sb          $zero, -0x7028($gp)
    ctx->pc = 0x1f86acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938584), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f86b0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1F86B0u;
    SET_GPR_U32(ctx, 31, 0x1F86B8u);
    ctx->pc = 0x1F86B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F86B0u;
            // 0x1f86b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F86B8u; }
        if (ctx->pc != 0x1F86B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F86B8u; }
        if (ctx->pc != 0x1F86B8u) { return; }
    }
    ctx->pc = 0x1F86B8u;
label_1f86b8:
    // 0x1f86b8: 0x97838fe0  lhu         $v1, -0x7020($gp)
    ctx->pc = 0x1f86b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938592)));
    // 0x1f86bc: 0x97828fdc  lhu         $v0, -0x7024($gp)
    ctx->pc = 0x1f86bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938588)));
    // 0x1f86c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f86c4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1f86c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f86c8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F86C8u;
    {
        const bool branch_taken_0x1f86c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F86C8u;
            // 0x1f86cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86c8) {
            ctx->pc = 0x1F870Cu;
            goto label_1f870c;
        }
    }
    ctx->pc = 0x1F86D0u;
    // 0x1f86d0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f86d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f86d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f86d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f86d8: 0xa3828fd8  sb          $v0, -0x7028($gp)
    ctx->pc = 0x1f86d8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938584), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f86dc: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1F86DCu;
    SET_GPR_U32(ctx, 31, 0x1F86E4u);
    ctx->pc = 0x1F86E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F86DCu;
            // 0x1f86e0: 0x24a58b30  addiu       $a1, $a1, -0x74D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F86E4u; }
        if (ctx->pc != 0x1F86E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F86E4u; }
        if (ctx->pc != 0x1F86E4u) { return; }
    }
    ctx->pc = 0x1F86E4u;
label_1f86e4:
    // 0x1f86e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f86e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f86e8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f86e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f86ec: 0x8c22ca54  lw          $v0, -0x35AC($at)
    ctx->pc = 0x1f86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
    // 0x1f86f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f86f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f86f4: 0xac4400b0  sw          $a0, 0xB0($v0)
    ctx->pc = 0x1f86f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 4));
    // 0x1f86f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f86f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f86fc: 0x8c22ca54  lw          $v0, -0x35AC($at)
    ctx->pc = 0x1f86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
    // 0x1f8700: 0xc088914  jal         func_222450
    ctx->pc = 0x1F8700u;
    SET_GPR_U32(ctx, 31, 0x1F8708u);
    ctx->pc = 0x1F8704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8700u;
            // 0x1f8704: 0xa04321e9  sb          $v1, 0x21E9($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8681), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222450u;
    if (runtime->hasFunction(0x222450u)) {
        auto targetFn = runtime->lookupFunction(0x222450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8708u; }
        if (ctx->pc != 0x1F8708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuDlTexture__Fv_0x222450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8708u; }
        if (ctx->pc != 0x1F8708u) { return; }
    }
    ctx->pc = 0x1F8708u;
label_1f8708:
    // 0x1f8708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f870c:
    // 0x1f870c: 0x8f858fe4  lw          $a1, -0x701C($gp)
    ctx->pc = 0x1f870cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938596)));
    // 0x1f8710: 0xc08891c  jal         func_222470
    ctx->pc = 0x1F8710u;
    SET_GPR_U32(ctx, 31, 0x1F8718u);
    ctx->pc = 0x1F8714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8710u;
            // 0x1f8714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8718u; }
        if (ctx->pc != 0x1F8718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8718u; }
        if (ctx->pc != 0x1F8718u) { return; }
    }
    ctx->pc = 0x1F8718u;
label_1f8718:
    // 0x1f8718: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f8718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f871c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f871cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f8720: 0x8c239308  lw          $v1, -0x6CF8($at)
    ctx->pc = 0x1f8720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939400)));
    // 0x1f8724: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x1f8724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
    // 0x1f8728: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f8728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f872c: 0x8c259304  lw          $a1, -0x6CFC($at)
    ctx->pc = 0x1f872cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939396)));
    // 0x1f8730: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f8730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f8734: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x1f8734u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f8738: 0x8c229300  lw          $v0, -0x6D00($at)
    ctx->pc = 0x1f8738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939392)));
    // 0x1f873c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1f873cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1f8740: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1F8740u;
    SET_GPR_U32(ctx, 31, 0x1F8748u);
    ctx->pc = 0x1F8744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8740u;
            // 0x1f8744: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8748u; }
        if (ctx->pc != 0x1F8748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8748u; }
        if (ctx->pc != 0x1F8748u) { return; }
    }
    ctx->pc = 0x1F8748u;
label_1f8748:
    // 0x1f8748: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f8748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f874c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f874cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f8750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f8754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8758: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F875Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8758u;
            // 0x1f875c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F8760u;
}
