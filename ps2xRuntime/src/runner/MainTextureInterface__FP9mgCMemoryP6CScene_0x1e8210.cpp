#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MainTextureInterface__FP9mgCMemoryP6CScene
// Address: 0x1e8210 - 0x1e8628
void MainTextureInterface__FP9mgCMemoryP6CScene_0x1e8210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MainTextureInterface__FP9mgCMemoryP6CScene_0x1e8210");
#endif

    switch (ctx->pc) {
        case 0x1e8230u: goto label_1e8230;
        case 0x1e824cu: goto label_1e824c;
        case 0x1e8254u: goto label_1e8254;
        case 0x1e8270u: goto label_1e8270;
        case 0x1e8278u: goto label_1e8278;
        case 0x1e8284u: goto label_1e8284;
        case 0x1e829cu: goto label_1e829c;
        case 0x1e82acu: goto label_1e82ac;
        case 0x1e82c8u: goto label_1e82c8;
        case 0x1e82e8u: goto label_1e82e8;
        case 0x1e82f8u: goto label_1e82f8;
        case 0x1e8300u: goto label_1e8300;
        case 0x1e830cu: goto label_1e830c;
        case 0x1e8324u: goto label_1e8324;
        case 0x1e8334u: goto label_1e8334;
        case 0x1e8354u: goto label_1e8354;
        case 0x1e8368u: goto label_1e8368;
        case 0x1e8384u: goto label_1e8384;
        case 0x1e8398u: goto label_1e8398;
        case 0x1e83b4u: goto label_1e83b4;
        case 0x1e83c8u: goto label_1e83c8;
        case 0x1e83e4u: goto label_1e83e4;
        case 0x1e83f8u: goto label_1e83f8;
        case 0x1e8414u: goto label_1e8414;
        case 0x1e8428u: goto label_1e8428;
        case 0x1e8444u: goto label_1e8444;
        case 0x1e8458u: goto label_1e8458;
        case 0x1e8474u: goto label_1e8474;
        case 0x1e8488u: goto label_1e8488;
        case 0x1e84a4u: goto label_1e84a4;
        case 0x1e84b4u: goto label_1e84b4;
        case 0x1e84e8u: goto label_1e84e8;
        case 0x1e853cu: goto label_1e853c;
        case 0x1e8570u: goto label_1e8570;
        case 0x1e85a4u: goto label_1e85a4;
        case 0x1e85d8u: goto label_1e85d8;
        case 0x1e85f0u: goto label_1e85f0;
        case 0x1e8608u: goto label_1e8608;
        case 0x1e8610u: goto label_1e8610;
        default: break;
    }

    ctx->pc = 0x1e8210u;

    // 0x1e8210: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e8210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e8214: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e8214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e8218: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e8218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e821c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e821cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e8220: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e8220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8224: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e8224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8228: 0xc0b61d8  jal         func_2D8760
    ctx->pc = 0x1E8228u;
    SET_GPR_U32(ctx, 31, 0x1E8230u);
    ctx->pc = 0x1E822Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8228u;
            // 0x1e822c: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8760u;
    if (runtime->hasFunction(0x2D8760u)) {
        auto targetFn = runtime->lookupFunction(0x2D8760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8230u; }
        if (ctx->pc != 0x1E8230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiImgPtr__Fv_0x2d8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8230u; }
        if (ctx->pc != 0x1E8230u) { return; }
    }
    ctx->pc = 0x1E8230u;
label_1e8230:
    // 0x1e8230: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e8234: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e8234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8238: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e8238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e823c: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x1e823cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1e8240: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e8240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8244: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1E8244u;
    SET_GPR_U32(ctx, 31, 0x1E824Cu);
    ctx->pc = 0x1E8248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8244u;
            // 0x1e8248: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E824Cu; }
        if (ctx->pc != 0x1E824Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E824Cu; }
        if (ctx->pc != 0x1E824Cu) { return; }
    }
    ctx->pc = 0x1E824Cu;
label_1e824c:
    // 0x1e824c: 0xc0b61f8  jal         func_2D87E0
    ctx->pc = 0x1E824Cu;
    SET_GPR_U32(ctx, 31, 0x1E8254u);
    ctx->pc = 0x2D87E0u;
    if (runtime->hasFunction(0x2D87E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8254u; }
        if (ctx->pc != 0x1E8254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontTex2ImgPtr__Fv_0x2d87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8254u; }
        if (ctx->pc != 0x1E8254u) { return; }
    }
    ctx->pc = 0x1E8254u;
label_1e8254:
    // 0x1e8254: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e8258: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e8258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e825c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e825cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e8260: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x1e8260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1e8264: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e8264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8268: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1E8268u;
    SET_GPR_U32(ctx, 31, 0x1E8270u);
    ctx->pc = 0x1E826Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8268u;
            // 0x1e826c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8270u; }
        if (ctx->pc != 0x1E8270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8270u; }
        if (ctx->pc != 0x1E8270u) { return; }
    }
    ctx->pc = 0x1E8270u;
label_1e8270:
    // 0x1e8270: 0xc04e780  jal         func_139E00
    ctx->pc = 0x1E8270u;
    SET_GPR_U32(ctx, 31, 0x1E8278u);
    ctx->pc = 0x1E8274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8270u;
            // 0x1e8274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8278u; }
        if (ctx->pc != 0x1E8278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8278u; }
        if (ctx->pc != 0x1E8278u) { return; }
    }
    ctx->pc = 0x1E8278u;
label_1e8278:
    // 0x1e8278: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e8278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e827c: 0xc04e714  jal         func_139C50
    ctx->pc = 0x1E827Cu;
    SET_GPR_U32(ctx, 31, 0x1E8284u);
    ctx->pc = 0x1E8280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E827Cu;
            // 0x1e8280: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8284u; }
        if (ctx->pc != 0x1E8284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8284u; }
        if (ctx->pc != 0x1E8284u) { return; }
    }
    ctx->pc = 0x1E8284u;
label_1e8284:
    // 0x1e8284: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x1e8284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1e8288: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e828c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e828cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8290: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e8290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e8294: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1E8294u;
    SET_GPR_U32(ctx, 31, 0x1E829Cu);
    ctx->pc = 0x1E8298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8294u;
            // 0x1e8298: 0x24a58180  addiu       $a1, $a1, -0x7E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E829Cu; }
        if (ctx->pc != 0x1E829Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E829Cu; }
        if (ctx->pc != 0x1E829Cu) { return; }
    }
    ctx->pc = 0x1E829Cu;
label_1e829c:
    // 0x1e829c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e829cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e82a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e82a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e82a4: 0xc0524c8  jal         func_149320
    ctx->pc = 0x1E82A4u;
    SET_GPR_U32(ctx, 31, 0x1E82ACu);
    ctx->pc = 0x1E82A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82A4u;
            // 0x1e82a8: 0x27a60098  addiu       $a2, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82ACu; }
        if (ctx->pc != 0x1E82ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82ACu; }
        if (ctx->pc != 0x1E82ACu) { return; }
    }
    ctx->pc = 0x1E82ACu;
label_1e82ac:
    // 0x1e82ac: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e82acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e82b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e82b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e82b4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e82b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e82b8: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x1e82b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x1e82bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e82bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e82c0: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1E82C0u;
    SET_GPR_U32(ctx, 31, 0x1E82C8u);
    ctx->pc = 0x1E82C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82C0u;
            // 0x1e82c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82C8u; }
        if (ctx->pc != 0x1E82C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82C8u; }
        if (ctx->pc != 0x1E82C8u) { return; }
    }
    ctx->pc = 0x1E82C8u;
label_1e82c8:
    // 0x1e82c8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1e82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1e82cc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E82CCu;
    {
        const bool branch_taken_0x1e82cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E82D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82CCu;
            // 0x1e82d0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e82cc) {
            ctx->pc = 0x1E82DCu;
            goto label_1e82dc;
        }
    }
    ctx->pc = 0x1E82D4u;
    // 0x1e82d4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1e82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1e82d8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1e82d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1e82dc:
    // 0x1e82dc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1e82dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e82e0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1E82E0u;
    SET_GPR_U32(ctx, 31, 0x1E82E8u);
    ctx->pc = 0x1E82E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82E0u;
            // 0x1e82e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82E8u; }
        if (ctx->pc != 0x1E82E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82E8u; }
        if (ctx->pc != 0x1E82E8u) { return; }
    }
    ctx->pc = 0x1E82E8u;
label_1e82e8:
    // 0x1e82e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e82e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e82ec: 0x24040067  addiu       $a0, $zero, 0x67
    ctx->pc = 0x1e82ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x1e82f0: 0xc0c3968  jal         func_30E5A0
    ctx->pc = 0x1E82F0u;
    SET_GPR_U32(ctx, 31, 0x1E82F8u);
    ctx->pc = 0x1E82F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82F0u;
            // 0x1e82f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E5A0u;
    if (runtime->hasFunction(0x30E5A0u)) {
        auto targetFn = runtime->lookupFunction(0x30E5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82F8u; }
        if (ctx->pc != 0x1E82F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadTakePhoto__FiP9mgCMemoryP1_0x30e5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82F8u; }
        if (ctx->pc != 0x1E82F8u) { return; }
    }
    ctx->pc = 0x1E82F8u;
label_1e82f8:
    // 0x1e82f8: 0xc04e780  jal         func_139E00
    ctx->pc = 0x1E82F8u;
    SET_GPR_U32(ctx, 31, 0x1E8300u);
    ctx->pc = 0x1E82FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82F8u;
            // 0x1e82fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8300u; }
        if (ctx->pc != 0x1E8300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8300u; }
        if (ctx->pc != 0x1E8300u) { return; }
    }
    ctx->pc = 0x1E8300u;
label_1e8300:
    // 0x1e8300: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e8300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8304: 0xc04e714  jal         func_139C50
    ctx->pc = 0x1E8304u;
    SET_GPR_U32(ctx, 31, 0x1E830Cu);
    ctx->pc = 0x1E8308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8304u;
            // 0x1e8308: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E830Cu; }
        if (ctx->pc != 0x1E830Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E830Cu; }
        if (ctx->pc != 0x1E830Cu) { return; }
    }
    ctx->pc = 0x1E830Cu;
label_1e830c:
    // 0x1e830c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x1e830cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1e8310: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e8314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8318: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e8318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e831c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1E831Cu;
    SET_GPR_U32(ctx, 31, 0x1E8324u);
    ctx->pc = 0x1E8320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E831Cu;
            // 0x1e8320: 0x24a581a0  addiu       $a1, $a1, -0x7E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8324u; }
        if (ctx->pc != 0x1E8324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8324u; }
        if (ctx->pc != 0x1E8324u) { return; }
    }
    ctx->pc = 0x1E8324u;
label_1e8324:
    // 0x1e8324: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e8324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e8328: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e8328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e832c: 0xc0524c8  jal         func_149320
    ctx->pc = 0x1E832Cu;
    SET_GPR_U32(ctx, 31, 0x1E8334u);
    ctx->pc = 0x1E8330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E832Cu;
            // 0x1e8330: 0x27a60098  addiu       $a2, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8334u; }
        if (ctx->pc != 0x1E8334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8334u; }
        if (ctx->pc != 0x1E8334u) { return; }
    }
    ctx->pc = 0x1E8334u;
label_1e8334:
    // 0x1e8334: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1e8334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1e8338: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8338u;
    {
        const bool branch_taken_0x1e8338 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E833Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8338u;
            // 0x1e833c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8338) {
            ctx->pc = 0x1E8348u;
            goto label_1e8348;
        }
    }
    ctx->pc = 0x1E8340u;
    // 0x1e8340: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1e8340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1e8344: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1e8344u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1e8348:
    // 0x1e8348: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1e8348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e834c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1E834Cu;
    SET_GPR_U32(ctx, 31, 0x1E8354u);
    ctx->pc = 0x1E8350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E834Cu;
            // 0x1e8350: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8354u; }
        if (ctx->pc != 0x1E8354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8354u; }
        if (ctx->pc != 0x1E8354u) { return; }
    }
    ctx->pc = 0x1E8354u;
label_1e8354:
    // 0x1e8354: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e8358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e835c: 0x24a581c0  addiu       $a1, $a1, -0x7E40
    ctx->pc = 0x1e835cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934976));
    // 0x1e8360: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1E8360u;
    SET_GPR_U32(ctx, 31, 0x1E8368u);
    ctx->pc = 0x1E8364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8360u;
            // 0x1e8364: 0x27a6009c  addiu       $a2, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8368u; }
        if (ctx->pc != 0x1E8368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8368u; }
        if (ctx->pc != 0x1E8368u) { return; }
    }
    ctx->pc = 0x1E8368u;
label_1e8368:
    // 0x1e8368: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e836c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e836cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8370: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e8370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e8374: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1e8374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1e8378: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e8378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e837c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1E837Cu;
    SET_GPR_U32(ctx, 31, 0x1E8384u);
    ctx->pc = 0x1E8380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E837Cu;
            // 0x1e8380: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8384u; }
        if (ctx->pc != 0x1E8384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8384u; }
        if (ctx->pc != 0x1E8384u) { return; }
    }
    ctx->pc = 0x1E8384u;
label_1e8384:
    // 0x1e8384: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e8388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e838c: 0x24a581d0  addiu       $a1, $a1, -0x7E30
    ctx->pc = 0x1e838cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934992));
    // 0x1e8390: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1E8390u;
    SET_GPR_U32(ctx, 31, 0x1E8398u);
    ctx->pc = 0x1E8394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8390u;
            // 0x1e8394: 0x27a6009c  addiu       $a2, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8398u; }
        if (ctx->pc != 0x1E8398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8398u; }
        if (ctx->pc != 0x1E8398u) { return; }
    }
    ctx->pc = 0x1E8398u;
label_1e8398:
    // 0x1e8398: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e839c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e839cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e83a0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e83a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e83a4: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x1e83a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1e83a8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e83a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e83ac: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1E83ACu;
    SET_GPR_U32(ctx, 31, 0x1E83B4u);
    ctx->pc = 0x1E83B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E83ACu;
            // 0x1e83b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83B4u; }
        if (ctx->pc != 0x1E83B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83B4u; }
        if (ctx->pc != 0x1E83B4u) { return; }
    }
    ctx->pc = 0x1E83B4u;
label_1e83b4:
    // 0x1e83b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e83b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e83b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e83b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e83bc: 0x24a581e0  addiu       $a1, $a1, -0x7E20
    ctx->pc = 0x1e83bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935008));
    // 0x1e83c0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1E83C0u;
    SET_GPR_U32(ctx, 31, 0x1E83C8u);
    ctx->pc = 0x1E83C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E83C0u;
            // 0x1e83c4: 0x27a6009c  addiu       $a2, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83C8u; }
        if (ctx->pc != 0x1E83C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83C8u; }
        if (ctx->pc != 0x1E83C8u) { return; }
    }
    ctx->pc = 0x1E83C8u;
label_1e83c8:
    // 0x1e83c8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e83c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e83cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e83ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e83d0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e83d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e83d4: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x1e83d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1e83d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e83d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e83dc: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1E83DCu;
    SET_GPR_U32(ctx, 31, 0x1E83E4u);
    ctx->pc = 0x1E83E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E83DCu;
            // 0x1e83e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83E4u; }
        if (ctx->pc != 0x1E83E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83E4u; }
        if (ctx->pc != 0x1E83E4u) { return; }
    }
    ctx->pc = 0x1E83E4u;
label_1e83e4:
    // 0x1e83e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e83e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e83e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e83e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e83ec: 0x24a581f0  addiu       $a1, $a1, -0x7E10
    ctx->pc = 0x1e83ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935024));
    // 0x1e83f0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1E83F0u;
    SET_GPR_U32(ctx, 31, 0x1E83F8u);
    ctx->pc = 0x1E83F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E83F0u;
            // 0x1e83f4: 0x27a6009c  addiu       $a2, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83F8u; }
        if (ctx->pc != 0x1E83F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83F8u; }
        if (ctx->pc != 0x1E83F8u) { return; }
    }
    ctx->pc = 0x1E83F8u;
label_1e83f8:
    // 0x1e83f8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e83f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e83fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e83fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8400: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e8400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e8404: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x1e8404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1e8408: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e8408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e840c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1E840Cu;
    SET_GPR_U32(ctx, 31, 0x1E8414u);
    ctx->pc = 0x1E8410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E840Cu;
            // 0x1e8410: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8414u; }
        if (ctx->pc != 0x1E8414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8414u; }
        if (ctx->pc != 0x1E8414u) { return; }
    }
    ctx->pc = 0x1E8414u;
label_1e8414:
    // 0x1e8414: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e8418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e841c: 0x24a58200  addiu       $a1, $a1, -0x7E00
    ctx->pc = 0x1e841cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935040));
    // 0x1e8420: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1E8420u;
    SET_GPR_U32(ctx, 31, 0x1E8428u);
    ctx->pc = 0x1E8424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8420u;
            // 0x1e8424: 0x27a6009c  addiu       $a2, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8428u; }
        if (ctx->pc != 0x1E8428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8428u; }
        if (ctx->pc != 0x1E8428u) { return; }
    }
    ctx->pc = 0x1E8428u;
label_1e8428:
    // 0x1e8428: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e842c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e842cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8430: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e8430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e8434: 0x24060059  addiu       $a2, $zero, 0x59
    ctx->pc = 0x1e8434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1e8438: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e8438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e843c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1E843Cu;
    SET_GPR_U32(ctx, 31, 0x1E8444u);
    ctx->pc = 0x1E8440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E843Cu;
            // 0x1e8440: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8444u; }
        if (ctx->pc != 0x1E8444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8444u; }
        if (ctx->pc != 0x1E8444u) { return; }
    }
    ctx->pc = 0x1E8444u;
label_1e8444:
    // 0x1e8444: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e8448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e844c: 0x24a58210  addiu       $a1, $a1, -0x7DF0
    ctx->pc = 0x1e844cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935056));
    // 0x1e8450: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1E8450u;
    SET_GPR_U32(ctx, 31, 0x1E8458u);
    ctx->pc = 0x1E8454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8450u;
            // 0x1e8454: 0x27a6009c  addiu       $a2, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8458u; }
        if (ctx->pc != 0x1E8458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8458u; }
        if (ctx->pc != 0x1E8458u) { return; }
    }
    ctx->pc = 0x1E8458u;
label_1e8458:
    // 0x1e8458: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e845c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e845cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8460: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e8460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e8464: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x1e8464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x1e8468: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e8468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e846c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1E846Cu;
    SET_GPR_U32(ctx, 31, 0x1E8474u);
    ctx->pc = 0x1E8470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E846Cu;
            // 0x1e8470: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8474u; }
        if (ctx->pc != 0x1E8474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8474u; }
        if (ctx->pc != 0x1E8474u) { return; }
    }
    ctx->pc = 0x1E8474u;
label_1e8474:
    // 0x1e8474: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e8474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e8478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e847c: 0x24a58220  addiu       $a1, $a1, -0x7DE0
    ctx->pc = 0x1e847cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935072));
    // 0x1e8480: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1E8480u;
    SET_GPR_U32(ctx, 31, 0x1E8488u);
    ctx->pc = 0x1E8484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8480u;
            // 0x1e8484: 0x27a6009c  addiu       $a2, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8488u; }
        if (ctx->pc != 0x1E8488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8488u; }
        if (ctx->pc != 0x1E8488u) { return; }
    }
    ctx->pc = 0x1E8488u;
label_1e8488:
    // 0x1e8488: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e848c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e848cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8490: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e8490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8494: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e8494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e8498: 0x2406006b  addiu       $a2, $zero, 0x6B
    ctx->pc = 0x1e8498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x1e849c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1E849Cu;
    SET_GPR_U32(ctx, 31, 0x1E84A4u);
    ctx->pc = 0x1E84A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E849Cu;
            // 0x1e84a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84A4u; }
        if (ctx->pc != 0x1E84A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84A4u; }
        if (ctx->pc != 0x1E84A4u) { return; }
    }
    ctx->pc = 0x1E84A4u;
label_1e84a4:
    // 0x1e84a4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1e84a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1e84a8: 0x240500ae  addiu       $a1, $zero, 0xAE
    ctx->pc = 0x1e84a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x1e84ac: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1E84ACu;
    SET_GPR_U32(ctx, 31, 0x1E84B4u);
    ctx->pc = 0x1E84B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E84ACu;
            // 0x1e84b0: 0x24848230  addiu       $a0, $a0, -0x7DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84B4u; }
        if (ctx->pc != 0x1E84B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84B4u; }
        if (ctx->pc != 0x1E84B4u) { return; }
    }
    ctx->pc = 0x1E84B4u;
label_1e84b4:
    // 0x1e84b4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1e84b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1e84b8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e84b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e84bc: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1e84bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1e84c0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e84c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1e84c4: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x1e84c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1e84c8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e84c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e84cc: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x1e84ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1e84d0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1e84d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e84d4: 0x24c680d0  addiu       $a2, $a2, -0x7F30
    ctx->pc = 0x1e84d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934736));
    // 0x1e84d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e84d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e84dc: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1e84dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e84e0: 0xc04b450  jal         func_12D140
    ctx->pc = 0x1E84E0u;
    SET_GPR_U32(ctx, 31, 0x1E84E8u);
    ctx->pc = 0x1E84E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E84E0u;
            // 0x1e84e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84E8u; }
        if (ctx->pc != 0x1E84E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84E8u; }
        if (ctx->pc != 0x1E84E8u) { return; }
    }
    ctx->pc = 0x1E84E8u;
label_1e84e8:
    // 0x1e84e8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1e84e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1e84ec: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1e84ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1e84f0: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x1e84f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1e84f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E84F4u;
    {
        const bool branch_taken_0x1e84f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E84F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E84F4u;
            // 0x1e84f8: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84f4) {
            ctx->pc = 0x1E8504u;
            goto label_1e8504;
        }
    }
    ctx->pc = 0x1E84FCu;
    // 0x1e84fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e84fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e8500: 0x24043  sra         $t0, $v0, 1
    ctx->pc = 0x1e8500u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
label_1e8504:
    // 0x1e8504: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x1e8504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1e8508: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8508u;
    {
        const bool branch_taken_0x1e8508 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E850Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8508u;
            // 0x1e850c: 0x24843  sra         $t1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8508) {
            ctx->pc = 0x1E8518u;
            goto label_1e8518;
        }
    }
    ctx->pc = 0x1E8510u;
    // 0x1e8510: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e8510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e8514: 0x24843  sra         $t1, $v0, 1
    ctx->pc = 0x1e8514u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 1));
label_1e8518:
    // 0x1e8518: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e851c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e851cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1e8520: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e8520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e8524: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1e8524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e8528: 0x24c68248  addiu       $a2, $a2, -0x7DB8
    ctx->pc = 0x1e8528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935112));
    // 0x1e852c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e852cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8530: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1e8530u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e8534: 0xc04b450  jal         func_12D140
    ctx->pc = 0x1E8534u;
    SET_GPR_U32(ctx, 31, 0x1E853Cu);
    ctx->pc = 0x1E8538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8534u;
            // 0x1e8538: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E853Cu; }
        if (ctx->pc != 0x1E853Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E853Cu; }
        if (ctx->pc != 0x1E853Cu) { return; }
    }
    ctx->pc = 0x1E853Cu;
label_1e853c:
    // 0x1e853c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1e853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1e8540: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e8544: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1e8544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1e8548: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e8548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1e854c: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x1e854cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1e8550: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e8550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e8554: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x1e8554u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1e8558: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x1e8558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x1e855c: 0x24c68250  addiu       $a2, $a2, -0x7DB0
    ctx->pc = 0x1e855cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935120));
    // 0x1e8560: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e8560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8564: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1e8564u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e8568: 0xc04b450  jal         func_12D140
    ctx->pc = 0x1E8568u;
    SET_GPR_U32(ctx, 31, 0x1E8570u);
    ctx->pc = 0x1E856Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8568u;
            // 0x1e856c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8570u; }
        if (ctx->pc != 0x1E8570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8570u; }
        if (ctx->pc != 0x1E8570u) { return; }
    }
    ctx->pc = 0x1E8570u;
label_1e8570:
    // 0x1e8570: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1e8570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1e8574: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e8574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e8578: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1e8578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1e857c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e857cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1e8580: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x1e8580u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1e8584: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e8584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e8588: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x1e8588u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1e858c: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x1e858cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x1e8590: 0x8f8a87a0  lw          $t2, -0x7860($gp)
    ctx->pc = 0x1e8590u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x1e8594: 0x24c68260  addiu       $a2, $a2, -0x7DA0
    ctx->pc = 0x1e8594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935136));
    // 0x1e8598: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e8598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e859c: 0xc04b450  jal         func_12D140
    ctx->pc = 0x1E859Cu;
    SET_GPR_U32(ctx, 31, 0x1E85A4u);
    ctx->pc = 0x1E85A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E859Cu;
            // 0x1e85a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85A4u; }
        if (ctx->pc != 0x1E85A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85A4u; }
        if (ctx->pc != 0x1E85A4u) { return; }
    }
    ctx->pc = 0x1E85A4u;
label_1e85a4:
    // 0x1e85a4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1e85a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1e85a8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e85ac: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1e85acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x1e85b0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1e85b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1e85b4: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x1e85b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1e85b8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e85b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e85bc: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x1e85bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1e85c0: 0x24050059  addiu       $a1, $zero, 0x59
    ctx->pc = 0x1e85c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1e85c4: 0x8f8a87a0  lw          $t2, -0x7860($gp)
    ctx->pc = 0x1e85c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
    // 0x1e85c8: 0x24c68268  addiu       $a2, $a2, -0x7D98
    ctx->pc = 0x1e85c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935144));
    // 0x1e85cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e85ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e85d0: 0xc04b450  jal         func_12D140
    ctx->pc = 0x1E85D0u;
    SET_GPR_U32(ctx, 31, 0x1E85D8u);
    ctx->pc = 0x1E85D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E85D0u;
            // 0x1e85d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85D8u; }
        if (ctx->pc != 0x1E85D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85D8u; }
        if (ctx->pc != 0x1E85D8u) { return; }
    }
    ctx->pc = 0x1E85D8u;
label_1e85d8:
    // 0x1e85d8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1e85d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1e85dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e85dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e85e0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1e85e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1e85e4: 0x24a58260  addiu       $a1, $a1, -0x7DA0
    ctx->pc = 0x1e85e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935136));
    // 0x1e85e8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1E85E8u;
    SET_GPR_U32(ctx, 31, 0x1E85F0u);
    ctx->pc = 0x1E85ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E85E8u;
            // 0x1e85ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85F0u; }
        if (ctx->pc != 0x1E85F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85F0u; }
        if (ctx->pc != 0x1E85F0u) { return; }
    }
    ctx->pc = 0x1E85F0u;
label_1e85f0:
    // 0x1e85f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e85f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e85f4: 0x3c010020  lui         $at, 0x20
    ctx->pc = 0x1e85f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32 << 16));
    // 0x1e85f8: 0x8f828d74  lw          $v0, -0x728C($gp)
    ctx->pc = 0x1e85f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
    // 0x1e85fc: 0x26242c70  addiu       $a0, $s1, 0x2C70
    ctx->pc = 0x1e85fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11376));
    // 0x1e8600: 0xc05f694  jal         func_17DA50
    ctx->pc = 0x1E8600u;
    SET_GPR_U32(ctx, 31, 0x1E8608u);
    ctx->pc = 0x1E8604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8600u;
            // 0x1e8604: 0x413021  addu        $a2, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DA50u;
    if (runtime->hasFunction(0x17DA50u)) {
        auto targetFn = runtime->lookupFunction(0x17DA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8608u; }
        if (ctx->pc != 0x1E8608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCrossTexture__10CFadeInOutFP10mgCTextureP1_0x17da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8608u; }
        if (ctx->pc != 0x1E8608u) { return; }
    }
    ctx->pc = 0x1E8608u;
label_1e8608:
    // 0x1e8608: 0xc07a024  jal         func_1E8090
    ctx->pc = 0x1E8608u;
    SET_GPR_U32(ctx, 31, 0x1E8610u);
    ctx->pc = 0x1E860Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8608u;
            // 0x1e860c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8090u;
    if (runtime->hasFunction(0x1E8090u)) {
        auto targetFn = runtime->lookupFunction(0x1E8090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8610u; }
        if (ctx->pc != 0x1E8610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureInfo__FP6CScene_0x1e8090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8610u; }
        if (ctx->pc != 0x1E8610u) { return; }
    }
    ctx->pc = 0x1E8610u;
label_1e8610:
    // 0x1e8610: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e8610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8614: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e8614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8618: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e8618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e861c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e861cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8620: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8620u;
            // 0x1e8624: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8628u;
}
