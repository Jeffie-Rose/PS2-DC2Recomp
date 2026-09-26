#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DebugMainDraw__Fv
// Address: 0x1d4260 - 0x1d4798
void DebugMainDraw__Fv_0x1d4260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DebugMainDraw__Fv_0x1d4260");
#endif

    switch (ctx->pc) {
        case 0x1d4294u: goto label_1d4294;
        case 0x1d429cu: goto label_1d429c;
        case 0x1d42acu: goto label_1d42ac;
        case 0x1d42b4u: goto label_1d42b4;
        case 0x1d42c0u: goto label_1d42c0;
        case 0x1d42ccu: goto label_1d42cc;
        case 0x1d42e4u: goto label_1d42e4;
        case 0x1d42f8u: goto label_1d42f8;
        case 0x1d430cu: goto label_1d430c;
        case 0x1d4314u: goto label_1d4314;
        case 0x1d4320u: goto label_1d4320;
        case 0x1d4364u: goto label_1d4364;
        case 0x1d4394u: goto label_1d4394;
        case 0x1d43d0u: goto label_1d43d0;
        case 0x1d440cu: goto label_1d440c;
        case 0x1d4430u: goto label_1d4430;
        case 0x1d448cu: goto label_1d448c;
        case 0x1d44e0u: goto label_1d44e0;
        case 0x1d4534u: goto label_1d4534;
        case 0x1d4588u: goto label_1d4588;
        case 0x1d45d8u: goto label_1d45d8;
        case 0x1d45f4u: goto label_1d45f4;
        case 0x1d45fcu: goto label_1d45fc;
        case 0x1d4608u: goto label_1d4608;
        case 0x1d4614u: goto label_1d4614;
        case 0x1d462cu: goto label_1d462c;
        case 0x1d4640u: goto label_1d4640;
        case 0x1d4654u: goto label_1d4654;
        case 0x1d465cu: goto label_1d465c;
        case 0x1d4678u: goto label_1d4678;
        case 0x1d4680u: goto label_1d4680;
        case 0x1d46ecu: goto label_1d46ec;
        case 0x1d4714u: goto label_1d4714;
        case 0x1d4748u: goto label_1d4748;
        case 0x1d4770u: goto label_1d4770;
        default: break;
    }

    ctx->pc = 0x1d4260u;

    // 0x1d4260: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1d4260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1d4264: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d4264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d4268: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d4268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d426c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d4270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4278: 0x8c23f6f8  lw          $v1, -0x908($at)
    ctx->pc = 0x1d4278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964984)));
    // 0x1d427c: 0x10600140  beqz        $v1, . + 4 + (0x140 << 2)
    ctx->pc = 0x1D427Cu;
    {
        const bool branch_taken_0x1d427c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D427Cu;
            // 0x1d4280: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d427c) {
            ctx->pc = 0x1D4780u;
            goto label_1d4780;
        }
    }
    ctx->pc = 0x1D4284u;
    // 0x1d4284: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x1d4284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d4288: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1d4288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1d428c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x1D428Cu;
    SET_GPR_U32(ctx, 31, 0x1D4294u);
    ctx->pc = 0x1D4290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D428Cu;
            // 0x1d4290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4294u; }
        if (ctx->pc != 0x1D4294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4294u; }
        if (ctx->pc != 0x1D4294u) { return; }
    }
    ctx->pc = 0x1D4294u;
label_1d4294:
    // 0x1d4294: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1D4294u;
    SET_GPR_U32(ctx, 31, 0x1D429Cu);
    ctx->pc = 0x1D4298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4294u;
            // 0x1d4298: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D429Cu; }
        if (ctx->pc != 0x1D429Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D429Cu; }
        if (ctx->pc != 0x1D429Cu) { return; }
    }
    ctx->pc = 0x1D429Cu;
label_1d429c:
    // 0x1d429c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d42a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d42a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d42a4: 0xc04d104  jal         func_134410
    ctx->pc = 0x1D42A4u;
    SET_GPR_U32(ctx, 31, 0x1D42ACu);
    ctx->pc = 0x1D42A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D42A4u;
            // 0x1d42a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D42ACu; }
        if (ctx->pc != 0x1D42ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D42ACu; }
        if (ctx->pc != 0x1D42ACu) { return; }
    }
    ctx->pc = 0x1D42ACu;
label_1d42ac:
    // 0x1d42ac: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1D42ACu;
    SET_GPR_U32(ctx, 31, 0x1D42B4u);
    ctx->pc = 0x1D42B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D42ACu;
            // 0x1d42b0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D42B4u; }
        if (ctx->pc != 0x1D42B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D42B4u; }
        if (ctx->pc != 0x1D42B4u) { return; }
    }
    ctx->pc = 0x1D42B4u;
label_1d42b4:
    // 0x1d42b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d42b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d42b8: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1D42B8u;
    SET_GPR_U32(ctx, 31, 0x1D42C0u);
    ctx->pc = 0x1D42BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D42B8u;
            // 0x1d42bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D42C0u; }
        if (ctx->pc != 0x1D42C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D42C0u; }
        if (ctx->pc != 0x1D42C0u) { return; }
    }
    ctx->pc = 0x1D42C0u;
label_1d42c0:
    // 0x1d42c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d42c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d42c4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1D42C4u;
    SET_GPR_U32(ctx, 31, 0x1D42CCu);
    ctx->pc = 0x1D42C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D42C4u;
            // 0x1d42c8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D42CCu; }
        if (ctx->pc != 0x1D42CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D42CCu; }
        if (ctx->pc != 0x1D42CCu) { return; }
    }
    ctx->pc = 0x1D42CCu;
label_1d42cc:
    // 0x1d42cc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d42ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d42d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d42d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d42d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d42d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d42d8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1d42d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d42dc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1D42DCu;
    SET_GPR_U32(ctx, 31, 0x1D42E4u);
    ctx->pc = 0x1D42E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D42DCu;
            // 0x1d42e0: 0x24080074  addiu       $t0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D42E4u; }
        if (ctx->pc != 0x1D42E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D42E4u; }
        if (ctx->pc != 0x1D42E4u) { return; }
    }
    ctx->pc = 0x1D42E4u;
label_1d42e4:
    // 0x1d42e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d42e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d42e8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d42e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d42ec: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1d42ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d42f0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1D42F0u;
    SET_GPR_U32(ctx, 31, 0x1D42F8u);
    ctx->pc = 0x1D42F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D42F0u;
            // 0x1d42f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D42F8u; }
        if (ctx->pc != 0x1D42F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D42F8u; }
        if (ctx->pc != 0x1D42F8u) { return; }
    }
    ctx->pc = 0x1D42F8u;
label_1d42f8:
    // 0x1d42f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d42fc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1d42fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d4300: 0x24060120  addiu       $a2, $zero, 0x120
    ctx->pc = 0x1d4300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x1d4304: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1D4304u;
    SET_GPR_U32(ctx, 31, 0x1D430Cu);
    ctx->pc = 0x1D4308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4304u;
            // 0x1d4308: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D430Cu; }
        if (ctx->pc != 0x1D430Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D430Cu; }
        if (ctx->pc != 0x1D430Cu) { return; }
    }
    ctx->pc = 0x1D430Cu;
label_1d430c:
    // 0x1d430c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1D430Cu;
    SET_GPR_U32(ctx, 31, 0x1D4314u);
    ctx->pc = 0x1D4310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D430Cu;
            // 0x1d4310: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4314u; }
        if (ctx->pc != 0x1D4314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4314u; }
        if (ctx->pc != 0x1D4314u) { return; }
    }
    ctx->pc = 0x1D4314u;
label_1d4314:
    // 0x1d4314: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d4314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1d4318: 0xc0618dc  jal         func_186370
    ctx->pc = 0x1D4318u;
    SET_GPR_U32(ctx, 31, 0x1D4320u);
    ctx->pc = 0x1D431Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4318u;
            // 0x1d431c: 0x248407e0  addiu       $a0, $a0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186370u;
    if (runtime->hasFunction(0x186370u)) {
        auto targetFn = runtime->lookupFunction(0x186370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4320u; }
        if (ctx->pc != 0x1D4320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__11dbgCJISFontFv_0x186370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4320u; }
        if (ctx->pc != 0x1D4320u) { return; }
    }
    ctx->pc = 0x1D4320u;
label_1d4320:
    // 0x1d4320: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1d4320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1d4324: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1d4324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1d4328: 0xac221074  sw          $v0, 0x1074($at)
    ctx->pc = 0x1d4328u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4212), GPR_U32(ctx, 2));
    // 0x1d432c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d432cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1d4330: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d4330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d4334: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1d4334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1d4338: 0xac231068  sw          $v1, 0x1068($at)
    ctx->pc = 0x1d4338u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4200), GPR_U32(ctx, 3));
    // 0x1d433c: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1d433cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1d4340: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1d4340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1d4344: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x1d4344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x1d4348: 0xac23106c  sw          $v1, 0x106C($at)
    ctx->pc = 0x1d4348u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4204), GPR_U32(ctx, 3));
    // 0x1d434c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d4350: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1d4350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1d4354: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1d4354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d4358: 0xac231070  sw          $v1, 0x1070($at)
    ctx->pc = 0x1d4358u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4208), GPR_U32(ctx, 3));
    // 0x1d435c: 0xc061a0c  jal         func_186830
    ctx->pc = 0x1D435Cu;
    SET_GPR_U32(ctx, 31, 0x1D4364u);
    ctx->pc = 0x1D4360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D435Cu;
            // 0x1d4360: 0x24e773b0  addiu       $a3, $a3, 0x73B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4364u; }
        if (ctx->pc != 0x1D4364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4364u; }
        if (ctx->pc != 0x1D4364u) { return; }
    }
    ctx->pc = 0x1D4364u;
label_1d4364:
    // 0x1d4364: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1d4364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1d4368: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1d4368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d436c: 0x24a59060  addiu       $a1, $a1, -0x6FA0
    ctx->pc = 0x1d436cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938720));
    // 0x1d4370: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d4370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4374: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1d4374u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d4378: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1d4378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d437c: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x1d437cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d4380: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d4380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4384: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d4384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4388: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1d4388u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1d438c: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x1d438cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x1d4390: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1d4390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_1d4394:
    // 0x1d4394: 0x8f828e38  lw          $v0, -0x71C8($gp)
    ctx->pc = 0x1d4394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938168)));
    // 0x1d4398: 0x1450000f  bne         $v0, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D4398u;
    {
        const bool branch_taken_0x1d4398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D439Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4398u;
            // 0x1d439c: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4398) {
            ctx->pc = 0x1D43D8u;
            goto label_1d43d8;
        }
    }
    ctx->pc = 0x1D43A0u;
    // 0x1d43a0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d43a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1d43a4: 0x8c470160  lw          $a3, 0x160($v0)
    ctx->pc = 0x1d43a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x1d43a8: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x1d43a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x1d43ac: 0x26460040  addiu       $a2, $s2, 0x40
    ctx->pc = 0x1d43acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1d43b0: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x1d43b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x1d43b4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d43b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d43b8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d43bc: 0x24429040  addiu       $v0, $v0, -0x6FC0
    ctx->pc = 0x1d43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938688));
    // 0x1d43c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d43c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d43c4: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1d43c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d43c8: 0xc061a0c  jal         func_186830
    ctx->pc = 0x1D43C8u;
    SET_GPR_U32(ctx, 31, 0x1D43D0u);
    ctx->pc = 0x1D43CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D43C8u;
            // 0x1d43cc: 0x250873c0  addiu       $t0, $t0, 0x73C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D43D0u; }
        if (ctx->pc != 0x1D43D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D43D0u; }
        if (ctx->pc != 0x1D43D0u) { return; }
    }
    ctx->pc = 0x1D43D0u;
label_1d43d0:
    // 0x1d43d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D43D0u;
    {
        const bool branch_taken_0x1d43d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d43d0) {
            ctx->pc = 0x1D440Cu;
            goto label_1d440c;
        }
    }
    ctx->pc = 0x1D43D8u;
label_1d43d8:
    // 0x1d43d8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d43dc: 0x24429040  addiu       $v0, $v0, -0x6FC0
    ctx->pc = 0x1d43dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938688));
    // 0x1d43e0: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x1d43e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x1d43e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d43e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d43e8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d43e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1d43ec: 0x8c670160  lw          $a3, 0x160($v1)
    ctx->pc = 0x1d43ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x1d43f0: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x1d43f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x1d43f4: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1d43f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d43f8: 0x26460040  addiu       $a2, $s2, 0x40
    ctx->pc = 0x1d43f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1d43fc: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x1d43fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x1d4400: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d4400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d4404: 0xc061a0c  jal         func_186830
    ctx->pc = 0x1D4404u;
    SET_GPR_U32(ctx, 31, 0x1D440Cu);
    ctx->pc = 0x1D4408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4404u;
            // 0x1d4408: 0x250873c8  addiu       $t0, $t0, 0x73C8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D440Cu; }
        if (ctx->pc != 0x1D440Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D440Cu; }
        if (ctx->pc != 0x1D440Cu) { return; }
    }
    ctx->pc = 0x1D440Cu;
label_1d440c:
    // 0x1d440c: 0x0  nop
    ctx->pc = 0x1d440cu;
    // NOP
    // 0x1d4410: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d4410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d4414: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x1d4414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d4418: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1d4418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1d441c: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1D441Cu;
    {
        const bool branch_taken_0x1d441c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D441Cu;
            // 0x1d4420: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d441c) {
            ctx->pc = 0x1D4394u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d4394;
        }
    }
    ctx->pc = 0x1D4424u;
    // 0x1d4424: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d4424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d4428: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x1D4428u;
    SET_GPR_U32(ctx, 31, 0x1D4430u);
    ctx->pc = 0x1D442Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4428u;
            // 0x1d442c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4430u; }
        if (ctx->pc != 0x1D4430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4430u; }
        if (ctx->pc != 0x1D4430u) { return; }
    }
    ctx->pc = 0x1D4430u;
label_1d4430:
    // 0x1d4430: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1d4430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1d4434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d4434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4438: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1d4438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1d443c: 0x8f828d70  lw          $v0, -0x7290($gp)
    ctx->pc = 0x1d443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1d4440: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1d4440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1d4444: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1d4444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1d4448: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d444c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D444Cu;
    {
        const bool branch_taken_0x1d444c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D4450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D444Cu;
            // 0x1d4450: 0x24283  sra         $t0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d444c) {
            ctx->pc = 0x1D445Cu;
            goto label_1d445c;
        }
    }
    ctx->pc = 0x1D4454u;
    // 0x1d4454: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1d4454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1d4458: 0x24283  sra         $t0, $v0, 10
    ctx->pc = 0x1d4458u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 10));
label_1d445c:
    // 0x1d445c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1d445cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d4460: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4460u;
    {
        const bool branch_taken_0x1d4460 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D4464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4460u;
            // 0x1d4464: 0x24a83  sra         $t1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4460) {
            ctx->pc = 0x1D4470u;
            goto label_1d4470;
        }
    }
    ctx->pc = 0x1D4468u;
    // 0x1d4468: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1d4468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1d446c: 0x24a83  sra         $t1, $v0, 10
    ctx->pc = 0x1d446cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 10));
label_1d4470:
    // 0x1d4470: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d4470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1d4474: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1d4474u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1d4478: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x1d4478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x1d447c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d447cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d4480: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1d4480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1d4484: 0xc061a0c  jal         func_186830
    ctx->pc = 0x1D4484u;
    SET_GPR_U32(ctx, 31, 0x1D448Cu);
    ctx->pc = 0x1D4488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4484u;
            // 0x1d4488: 0x24e773d0  addiu       $a3, $a3, 0x73D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D448Cu; }
        if (ctx->pc != 0x1D448Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D448Cu; }
        if (ctx->pc != 0x1D448Cu) { return; }
    }
    ctx->pc = 0x1D448Cu;
label_1d448c:
    // 0x1d448c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d448cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d4490: 0x8c22f344  lw          $v0, -0xCBC($at)
    ctx->pc = 0x1d4490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964036)));
    // 0x1d4494: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4498: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4498u;
    {
        const bool branch_taken_0x1d4498 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D449Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4498u;
            // 0x1d449c: 0x24283  sra         $t0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4498) {
            ctx->pc = 0x1D44A8u;
            goto label_1d44a8;
        }
    }
    ctx->pc = 0x1D44A0u;
    // 0x1d44a0: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1d44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1d44a4: 0x24283  sra         $t0, $v0, 10
    ctx->pc = 0x1d44a4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 10));
label_1d44a8:
    // 0x1d44a8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d44a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d44ac: 0x8c22f348  lw          $v0, -0xCB8($at)
    ctx->pc = 0x1d44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964040)));
    // 0x1d44b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d44b4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D44B4u;
    {
        const bool branch_taken_0x1d44b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D44B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D44B4u;
            // 0x1d44b8: 0x24a83  sra         $t1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44b4) {
            ctx->pc = 0x1D44C4u;
            goto label_1d44c4;
        }
    }
    ctx->pc = 0x1D44BCu;
    // 0x1d44bc: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1d44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1d44c0: 0x24a83  sra         $t1, $v0, 10
    ctx->pc = 0x1d44c0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 10));
label_1d44c4:
    // 0x1d44c4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d44c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1d44c8: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1d44c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1d44cc: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x1d44ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x1d44d0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d44d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d44d4: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x1d44d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1d44d8: 0xc061a0c  jal         func_186830
    ctx->pc = 0x1D44D8u;
    SET_GPR_U32(ctx, 31, 0x1D44E0u);
    ctx->pc = 0x1D44DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D44D8u;
            // 0x1d44dc: 0x24e773f0  addiu       $a3, $a3, 0x73F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D44E0u; }
        if (ctx->pc != 0x1D44E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D44E0u; }
        if (ctx->pc != 0x1D44E0u) { return; }
    }
    ctx->pc = 0x1D44E0u;
label_1d44e0:
    // 0x1d44e0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d44e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d44e4: 0x8c22f404  lw          $v0, -0xBFC($at)
    ctx->pc = 0x1d44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964228)));
    // 0x1d44e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d44ec: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D44ECu;
    {
        const bool branch_taken_0x1d44ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D44F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D44ECu;
            // 0x1d44f0: 0x24283  sra         $t0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44ec) {
            ctx->pc = 0x1D44FCu;
            goto label_1d44fc;
        }
    }
    ctx->pc = 0x1D44F4u;
    // 0x1d44f4: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1d44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1d44f8: 0x24283  sra         $t0, $v0, 10
    ctx->pc = 0x1d44f8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 10));
label_1d44fc:
    // 0x1d44fc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d44fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d4500: 0x8c22f408  lw          $v0, -0xBF8($at)
    ctx->pc = 0x1d4500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964232)));
    // 0x1d4504: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4508: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4508u;
    {
        const bool branch_taken_0x1d4508 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D450Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4508u;
            // 0x1d450c: 0x24a83  sra         $t1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4508) {
            ctx->pc = 0x1D4518u;
            goto label_1d4518;
        }
    }
    ctx->pc = 0x1D4510u;
    // 0x1d4510: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1d4510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1d4514: 0x24a83  sra         $t1, $v0, 10
    ctx->pc = 0x1d4514u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 10));
label_1d4518:
    // 0x1d4518: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d4518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1d451c: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1d451cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1d4520: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x1d4520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x1d4524: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d4524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d4528: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x1d4528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1d452c: 0xc061a0c  jal         func_186830
    ctx->pc = 0x1D452Cu;
    SET_GPR_U32(ctx, 31, 0x1D4534u);
    ctx->pc = 0x1D4530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D452Cu;
            // 0x1d4530: 0x24e77410  addiu       $a3, $a3, 0x7410 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4534u; }
        if (ctx->pc != 0x1D4534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4534u; }
        if (ctx->pc != 0x1D4534u) { return; }
    }
    ctx->pc = 0x1D4534u;
label_1d4534:
    // 0x1d4534: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d4534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d4538: 0x8c22f584  lw          $v0, -0xA7C($at)
    ctx->pc = 0x1d4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964612)));
    // 0x1d453c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d453cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4540: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4540u;
    {
        const bool branch_taken_0x1d4540 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D4544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4540u;
            // 0x1d4544: 0x24283  sra         $t0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4540) {
            ctx->pc = 0x1D4550u;
            goto label_1d4550;
        }
    }
    ctx->pc = 0x1D4548u;
    // 0x1d4548: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1d4548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1d454c: 0x24283  sra         $t0, $v0, 10
    ctx->pc = 0x1d454cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 10));
label_1d4550:
    // 0x1d4550: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d4550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d4554: 0x8c22f588  lw          $v0, -0xA78($at)
    ctx->pc = 0x1d4554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964616)));
    // 0x1d4558: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d455c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D455Cu;
    {
        const bool branch_taken_0x1d455c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D4560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D455Cu;
            // 0x1d4560: 0x24a83  sra         $t1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d455c) {
            ctx->pc = 0x1D456Cu;
            goto label_1d456c;
        }
    }
    ctx->pc = 0x1D4564u;
    // 0x1d4564: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1d4564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1d4568: 0x24a83  sra         $t1, $v0, 10
    ctx->pc = 0x1d4568u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 10));
label_1d456c:
    // 0x1d456c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d456cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1d4570: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1d4570u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1d4574: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x1d4574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x1d4578: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d4578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d457c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1d457cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d4580: 0xc061a0c  jal         func_186830
    ctx->pc = 0x1D4580u;
    SET_GPR_U32(ctx, 31, 0x1D4588u);
    ctx->pc = 0x1D4584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4580u;
            // 0x1d4584: 0x24e77430  addiu       $a3, $a3, 0x7430 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4588u; }
        if (ctx->pc != 0x1D4588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4588u; }
        if (ctx->pc != 0x1D4588u) { return; }
    }
    ctx->pc = 0x1D4588u;
label_1d4588:
    // 0x1d4588: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1d4588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d458c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d4590: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1d4590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4594: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4598: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4598u;
    {
        const bool branch_taken_0x1d4598 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D459Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4598u;
            // 0x1d459c: 0x24283  sra         $t0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4598) {
            ctx->pc = 0x1D45A8u;
            goto label_1d45a8;
        }
    }
    ctx->pc = 0x1D45A0u;
    // 0x1d45a0: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1d45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1d45a4: 0x24283  sra         $t0, $v0, 10
    ctx->pc = 0x1d45a4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 10));
label_1d45a8:
    // 0x1d45a8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1d45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d45ac: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D45ACu;
    {
        const bool branch_taken_0x1d45ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D45B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45ACu;
            // 0x1d45b0: 0x24a83  sra         $t1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45ac) {
            ctx->pc = 0x1D45BCu;
            goto label_1d45bc;
        }
    }
    ctx->pc = 0x1D45B4u;
    // 0x1d45b4: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1d45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1d45b8: 0x24a83  sra         $t1, $v0, 10
    ctx->pc = 0x1d45b8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 10));
label_1d45bc:
    // 0x1d45bc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d45bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1d45c0: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1d45c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1d45c4: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x1d45c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x1d45c8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d45c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d45cc: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1d45ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1d45d0: 0xc061a0c  jal         func_186830
    ctx->pc = 0x1D45D0u;
    SET_GPR_U32(ctx, 31, 0x1D45D8u);
    ctx->pc = 0x1D45D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45D0u;
            // 0x1d45d4: 0x24e77450  addiu       $a3, $a3, 0x7450 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45D8u; }
        if (ctx->pc != 0x1D45D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45D8u; }
        if (ctx->pc != 0x1D45D8u) { return; }
    }
    ctx->pc = 0x1D45D8u;
label_1d45d8:
    // 0x1d45d8: 0x8f848e40  lw          $a0, -0x71C0($gp)
    ctx->pc = 0x1d45d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
    // 0x1d45dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d45e0: 0x10830067  beq         $a0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x1D45E0u;
    {
        const bool branch_taken_0x1d45e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D45E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45E0u;
            // 0x1d45e4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45e0) {
            ctx->pc = 0x1D4780u;
            goto label_1d4780;
        }
    }
    ctx->pc = 0x1D45E8u;
    // 0x1d45e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d45e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45ec: 0xc04d104  jal         func_134410
    ctx->pc = 0x1D45ECu;
    SET_GPR_U32(ctx, 31, 0x1D45F4u);
    ctx->pc = 0x1D45F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45ECu;
            // 0x1d45f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45F4u; }
        if (ctx->pc != 0x1D45F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45F4u; }
        if (ctx->pc != 0x1D45F4u) { return; }
    }
    ctx->pc = 0x1D45F4u;
label_1d45f4:
    // 0x1d45f4: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1D45F4u;
    SET_GPR_U32(ctx, 31, 0x1D45FCu);
    ctx->pc = 0x1D45F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45F4u;
            // 0x1d45f8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45FCu; }
        if (ctx->pc != 0x1D45FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45FCu; }
        if (ctx->pc != 0x1D45FCu) { return; }
    }
    ctx->pc = 0x1D45FCu;
label_1d45fc:
    // 0x1d45fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d45fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d4600: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1D4600u;
    SET_GPR_U32(ctx, 31, 0x1D4608u);
    ctx->pc = 0x1D4604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4600u;
            // 0x1d4604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4608u; }
        if (ctx->pc != 0x1D4608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4608u; }
        if (ctx->pc != 0x1D4608u) { return; }
    }
    ctx->pc = 0x1D4608u;
label_1d4608:
    // 0x1d4608: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d4608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d460c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1D460Cu;
    SET_GPR_U32(ctx, 31, 0x1D4614u);
    ctx->pc = 0x1D4610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D460Cu;
            // 0x1d4610: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4614u; }
        if (ctx->pc != 0x1D4614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4614u; }
        if (ctx->pc != 0x1D4614u) { return; }
    }
    ctx->pc = 0x1D4614u;
label_1d4614:
    // 0x1d4614: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1d4614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d4618: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d4618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d461c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d461cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4620: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1d4620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d4624: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1D4624u;
    SET_GPR_U32(ctx, 31, 0x1D462Cu);
    ctx->pc = 0x1D4628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4624u;
            // 0x1d4628: 0x24080074  addiu       $t0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D462Cu; }
        if (ctx->pc != 0x1D462Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D462Cu; }
        if (ctx->pc != 0x1D462Cu) { return; }
    }
    ctx->pc = 0x1D462Cu;
label_1d462c:
    // 0x1d462c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d462cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d4630: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x1d4630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1d4634: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1d4634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d4638: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1D4638u;
    SET_GPR_U32(ctx, 31, 0x1D4640u);
    ctx->pc = 0x1D463Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4638u;
            // 0x1d463c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4640u; }
        if (ctx->pc != 0x1D4640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4640u; }
        if (ctx->pc != 0x1D4640u) { return; }
    }
    ctx->pc = 0x1D4640u;
label_1d4640:
    // 0x1d4640: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d4640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d4644: 0x24050168  addiu       $a1, $zero, 0x168
    ctx->pc = 0x1d4644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1d4648: 0x24060158  addiu       $a2, $zero, 0x158
    ctx->pc = 0x1d4648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    // 0x1d464c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1D464Cu;
    SET_GPR_U32(ctx, 31, 0x1D4654u);
    ctx->pc = 0x1D4650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D464Cu;
            // 0x1d4650: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4654u; }
        if (ctx->pc != 0x1D4654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4654u; }
        if (ctx->pc != 0x1D4654u) { return; }
    }
    ctx->pc = 0x1D4654u;
label_1d4654:
    // 0x1d4654: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1D4654u;
    SET_GPR_U32(ctx, 31, 0x1D465Cu);
    ctx->pc = 0x1D4658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4654u;
            // 0x1d4658: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D465Cu; }
        if (ctx->pc != 0x1D465Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D465Cu; }
        if (ctx->pc != 0x1D465Cu) { return; }
    }
    ctx->pc = 0x1D465Cu;
label_1d465c:
    // 0x1d465c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d465cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1d4660: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1d4660u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1d4664: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x1d4664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x1d4668: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1d4668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d466c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d466cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d4670: 0xc061a0c  jal         func_186830
    ctx->pc = 0x1D4670u;
    SET_GPR_U32(ctx, 31, 0x1D4678u);
    ctx->pc = 0x1D4674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4670u;
            // 0x1d4674: 0x24e77470  addiu       $a3, $a3, 0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4678u; }
        if (ctx->pc != 0x1D4678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4678u; }
        if (ctx->pc != 0x1D4678u) { return; }
    }
    ctx->pc = 0x1D4678u;
label_1d4678:
    // 0x1d4678: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d4678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d467c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d467cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4680:
    // 0x1d4680: 0x8f838e3c  lw          $v1, -0x71C4($gp)
    ctx->pc = 0x1d4680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938172)));
    // 0x1d4684: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d4684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d4688: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1d4688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1d468c: 0x704021  addu        $t0, $v1, $s0
    ctx->pc = 0x1d468cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d4690: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x1d4690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1d4694: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1d4694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d4698: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d4698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d469c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1d469cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d46a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d46a4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d46a8: 0x80620004  lb          $v0, 0x4($v1)
    ctx->pc = 0x1d46a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d46ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D46ACu;
    {
        const bool branch_taken_0x1d46ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d46ac) {
            ctx->pc = 0x1D46C4u;
            goto label_1d46c4;
        }
    }
    ctx->pc = 0x1D46B4u;
    // 0x1d46b4: 0x8f828e44  lw          $v0, -0x71BC($gp)
    ctx->pc = 0x1d46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938180)));
    // 0x1d46b8: 0x102082a  slt         $at, $t0, $v0
    ctx->pc = 0x1d46b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d46bc: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D46BCu;
    {
        const bool branch_taken_0x1d46bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d46bc) {
            ctx->pc = 0x1D471Cu;
            goto label_1d471c;
        }
    }
    ctx->pc = 0x1D46C4u;
label_1d46c4:
    // 0x1d46c4: 0x0  nop
    ctx->pc = 0x1d46c4u;
    // NOP
    // 0x1d46c8: 0x8f828e40  lw          $v0, -0x71C0($gp)
    ctx->pc = 0x1d46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
    // 0x1d46cc: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D46CCu;
    {
        const bool branch_taken_0x1d46cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D46D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D46CCu;
            // 0x1d46d0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46cc) {
            ctx->pc = 0x1D46F4u;
            goto label_1d46f4;
        }
    }
    ctx->pc = 0x1D46D4u;
    // 0x1d46d4: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1d46d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1d46d8: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x1d46d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1d46dc: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x1d46dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x1d46e0: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1d46e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d46e4: 0xc061a0c  jal         func_186830
    ctx->pc = 0x1D46E4u;
    SET_GPR_U32(ctx, 31, 0x1D46ECu);
    ctx->pc = 0x1D46E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D46E4u;
            // 0x1d46e8: 0x24e77488  addiu       $a3, $a3, 0x7488 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D46ECu; }
        if (ctx->pc != 0x1D46ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D46ECu; }
        if (ctx->pc != 0x1D46ECu) { return; }
    }
    ctx->pc = 0x1D46ECu;
label_1d46ec:
    // 0x1d46ec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D46ECu;
    {
        const bool branch_taken_0x1d46ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d46ec) {
            ctx->pc = 0x1D4770u;
            goto label_1d4770;
        }
    }
    ctx->pc = 0x1D46F4u;
label_1d46f4:
    // 0x1d46f4: 0x0  nop
    ctx->pc = 0x1d46f4u;
    // NOP
    // 0x1d46f8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d46f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1d46fc: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1d46fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1d4700: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x1d4700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1d4704: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x1d4704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x1d4708: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1d4708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d470c: 0xc061a0c  jal         func_186830
    ctx->pc = 0x1D470Cu;
    SET_GPR_U32(ctx, 31, 0x1D4714u);
    ctx->pc = 0x1D4710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D470Cu;
            // 0x1d4710: 0x24e77498  addiu       $a3, $a3, 0x7498 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4714u; }
        if (ctx->pc != 0x1D4714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4714u; }
        if (ctx->pc != 0x1D4714u) { return; }
    }
    ctx->pc = 0x1D4714u;
label_1d4714:
    // 0x1d4714: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D4714u;
    {
        const bool branch_taken_0x1d4714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4714) {
            ctx->pc = 0x1D4770u;
            goto label_1d4770;
        }
    }
    ctx->pc = 0x1D471Cu;
label_1d471c:
    // 0x1d471c: 0x0  nop
    ctx->pc = 0x1d471cu;
    // NOP
    // 0x1d4720: 0x8f828e40  lw          $v0, -0x71C0($gp)
    ctx->pc = 0x1d4720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
    // 0x1d4724: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4724u;
    {
        const bool branch_taken_0x1d4724 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4724u;
            // 0x1d4728: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4724) {
            ctx->pc = 0x1D4750u;
            goto label_1d4750;
        }
    }
    ctx->pc = 0x1D472Cu;
    // 0x1d472c: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1d472cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1d4730: 0x24690004  addiu       $t1, $v1, 0x4
    ctx->pc = 0x1d4730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1d4734: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x1d4734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1d4738: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x1d4738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x1d473c: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1d473cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d4740: 0xc061a0c  jal         func_186830
    ctx->pc = 0x1D4740u;
    SET_GPR_U32(ctx, 31, 0x1D4748u);
    ctx->pc = 0x1D4744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4740u;
            // 0x1d4744: 0x24e774a8  addiu       $a3, $a3, 0x74A8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4748u; }
        if (ctx->pc != 0x1D4748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4748u; }
        if (ctx->pc != 0x1D4748u) { return; }
    }
    ctx->pc = 0x1D4748u;
label_1d4748:
    // 0x1d4748: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4748u;
    {
        const bool branch_taken_0x1d4748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4748) {
            ctx->pc = 0x1D4770u;
            goto label_1d4770;
        }
    }
    ctx->pc = 0x1D4750u;
label_1d4750:
    // 0x1d4750: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d4750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1d4754: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1d4754u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1d4758: 0x24690004  addiu       $t1, $v1, 0x4
    ctx->pc = 0x1d4758u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1d475c: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x1d475cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1d4760: 0x248407e0  addiu       $a0, $a0, 0x7E0
    ctx->pc = 0x1d4760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    // 0x1d4764: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1d4764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d4768: 0xc061a0c  jal         func_186830
    ctx->pc = 0x1D4768u;
    SET_GPR_U32(ctx, 31, 0x1D4770u);
    ctx->pc = 0x1D476Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4768u;
            // 0x1d476c: 0x24e774b0  addiu       $a3, $a3, 0x74B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186830u;
    if (runtime->hasFunction(0x186830u)) {
        auto targetFn = runtime->lookupFunction(0x186830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4770u; }
        if (ctx->pc != 0x1D4770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintDirect__11dbgCJISFontFiiPce_0x186830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4770u; }
        if (ctx->pc != 0x1D4770u) { return; }
    }
    ctx->pc = 0x1D4770u;
label_1d4770:
    // 0x1d4770: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d4770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d4774: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1d4774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d4778: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1D4778u;
    {
        const bool branch_taken_0x1d4778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D477Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4778u;
            // 0x1d477c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4778) {
            ctx->pc = 0x1D4680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d4680;
        }
    }
    ctx->pc = 0x1D4780u;
label_1d4780:
    // 0x1d4780: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d4780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4784: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d4784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d478c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d478cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4790: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4790u;
            // 0x1d4794: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4798u;
}
