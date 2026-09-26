#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEnd__12CMenuTreeMapFv
// Address: 0x1ef9f0 - 0x1efd70
void InitEnd__12CMenuTreeMapFv_0x1ef9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEnd__12CMenuTreeMapFv_0x1ef9f0");
#endif

    switch (ctx->pc) {
        case 0x1efa28u: goto label_1efa28;
        case 0x1efa40u: goto label_1efa40;
        case 0x1efa50u: goto label_1efa50;
        case 0x1efa7cu: goto label_1efa7c;
        case 0x1efa94u: goto label_1efa94;
        case 0x1efa9cu: goto label_1efa9c;
        case 0x1efac0u: goto label_1efac0;
        case 0x1efac8u: goto label_1efac8;
        case 0x1efadcu: goto label_1efadc;
        case 0x1efaf8u: goto label_1efaf8;
        case 0x1efb08u: goto label_1efb08;
        case 0x1efb4cu: goto label_1efb4c;
        case 0x1efb58u: goto label_1efb58;
        case 0x1efb74u: goto label_1efb74;
        case 0x1efb9cu: goto label_1efb9c;
        case 0x1efbacu: goto label_1efbac;
        case 0x1efc28u: goto label_1efc28;
        case 0x1efc44u: goto label_1efc44;
        case 0x1efc88u: goto label_1efc88;
        case 0x1efc9cu: goto label_1efc9c;
        case 0x1efcb0u: goto label_1efcb0;
        case 0x1efcb8u: goto label_1efcb8;
        case 0x1efcd8u: goto label_1efcd8;
        case 0x1efcf0u: goto label_1efcf0;
        case 0x1efd10u: goto label_1efd10;
        default: break;
    }

    ctx->pc = 0x1ef9f0u;

    // 0x1ef9f0: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x1ef9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
    // 0x1ef9f4: 0x34215f10  ori         $at, $at, 0x5F10
    ctx->pc = 0x1ef9f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24336);
    // 0x1ef9f8: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x1ef9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1ef9fc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ef9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1efa00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1efa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1efa04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1efa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1efa08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1efa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1efa0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1efa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1efa10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1efa10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1efa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1efa18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1efa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1efa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1efa20: 0xc05231c  jal         func_148C70
    ctx->pc = 0x1EFA20u;
    SET_GPR_U32(ctx, 31, 0x1EFA28u);
    ctx->pc = 0x1EFA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA20u;
            // 0x1efa24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA28u; }
        if (ctx->pc != 0x1EFA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA28u; }
        if (ctx->pc != 0x1EFA28u) { return; }
    }
    ctx->pc = 0x1EFA28u;
label_1efa28:
    // 0x1efa28: 0x86860118  lh          $a2, 0x118($s4)
    ctx->pc = 0x1efa28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1efa2c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1efa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1efa30: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1efa30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa34: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1efa34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1efa38: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1EFA38u;
    SET_GPR_U32(ctx, 31, 0x1EFA40u);
    ctx->pc = 0x1EFA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA38u;
            // 0x1efa3c: 0x24a587b0  addiu       $a1, $a1, -0x7850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA40u; }
        if (ctx->pc != 0x1EFA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA40u; }
        if (ctx->pc != 0x1EFA40u) { return; }
    }
    ctx->pc = 0x1EFA40u;
label_1efa40:
    // 0x1efa40: 0x8ea40110  lw          $a0, 0x110($s5)
    ctx->pc = 0x1efa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
    // 0x1efa44: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1efa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1efa48: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1EFA48u;
    SET_GPR_U32(ctx, 31, 0x1EFA50u);
    ctx->pc = 0x1EFA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA48u;
            // 0x1efa4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA50u; }
        if (ctx->pc != 0x1EFA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA50u; }
        if (ctx->pc != 0x1EFA50u) { return; }
    }
    ctx->pc = 0x1EFA50u;
label_1efa50:
    // 0x1efa50: 0x8e900018  lw          $s0, 0x18($s4)
    ctx->pc = 0x1efa50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1efa54: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1efa54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1efa58: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x1efa58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x1efa5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1efa5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa60: 0x24a58860  addiu       $a1, $a1, -0x77A0
    ctx->pc = 0x1efa60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936672));
    // 0x1efa64: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1efa64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1efa68: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1efa68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1efa6c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1efa6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1efa70: 0x26311ef0  addiu       $s1, $s1, 0x1EF0
    ctx->pc = 0x1efa70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
    // 0x1efa74: 0xc0944c4  jal         func_251310
    ctx->pc = 0x1EFA74u;
    SET_GPR_U32(ctx, 31, 0x1EFA7Cu);
    ctx->pc = 0x1EFA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA74u;
            // 0x1efa78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251310u;
    if (runtime->hasFunction(0x251310u)) {
        auto targetFn = runtime->lookupFunction(0x251310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA7Cu; }
        if (ctx->pc != 0x1EFA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuWorkTextureEnter__FiPciii_0x251310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA7Cu; }
        if (ctx->pc != 0x1EFA7Cu) { return; }
    }
    ctx->pc = 0x1EFA7Cu;
label_1efa7c:
    // 0x1efa7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1efa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1efa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1efa84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1efa88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa8c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1EFA8Cu;
    SET_GPR_U32(ctx, 31, 0x1EFA94u);
    ctx->pc = 0x1EFA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA8Cu;
            // 0x1efa90: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA94u; }
        if (ctx->pc != 0x1EFA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA94u; }
        if (ctx->pc != 0x1EFA94u) { return; }
    }
    ctx->pc = 0x1EFA94u;
label_1efa94:
    // 0x1efa94: 0xc07be14  jal         func_1EF850
    ctx->pc = 0x1EFA94u;
    SET_GPR_U32(ctx, 31, 0x1EFA9Cu);
    ctx->pc = 0x1EF850u;
    if (runtime->hasFunction(0x1EF850u)) {
        auto targetFn = runtime->lookupFunction(0x1EF850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA9Cu; }
        if (ctx->pc != 0x1EFA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDngTreeMapFuncType__Fv_0x1ef850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA9Cu; }
        if (ctx->pc != 0x1EFA9Cu) { return; }
    }
    ctx->pc = 0x1EFA9Cu;
label_1efa9c:
    // 0x1efa9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1efa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1efaa0: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EFAA0u;
    {
        const bool branch_taken_0x1efaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1efaa0) {
            ctx->pc = 0x1EFAC0u;
            goto label_1efac0;
        }
    }
    ctx->pc = 0x1EFAA8u;
    // 0x1efaa8: 0x8f858f24  lw          $a1, -0x70DC($gp)
    ctx->pc = 0x1efaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938404)));
    // 0x1efaac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1efaacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1efab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efab4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1efab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efab8: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x1EFAB8u;
    SET_GPR_U32(ctx, 31, 0x1EFAC0u);
    ctx->pc = 0x1EFABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAB8u;
            // 0x1efabc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFAC0u; }
        if (ctx->pc != 0x1EFAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFAC0u; }
        if (ctx->pc != 0x1EFAC0u) { return; }
    }
    ctx->pc = 0x1EFAC0u;
label_1efac0:
    // 0x1efac0: 0xc07aaf8  jal         func_1EABE0
    ctx->pc = 0x1EFAC0u;
    SET_GPR_U32(ctx, 31, 0x1EFAC8u);
    ctx->pc = 0x1EFAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAC0u;
            // 0x1efac4: 0x8f848eb0  lw          $a0, -0x7150($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EABE0u;
    if (runtime->hasFunction(0x1EABE0u)) {
        auto targetFn = runtime->lookupFunction(0x1EABE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFAC8u; }
        if (ctx->pc != 0x1EFAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTextureInfo__11CDngFreeMapFv_0x1eabe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFAC8u; }
        if (ctx->pc != 0x1EFAC8u) { return; }
    }
    ctx->pc = 0x1EFAC8u;
label_1efac8:
    // 0x1efac8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1efac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1efacc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1efaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efad0: 0x24a58870  addiu       $a1, $a1, -0x7790
    ctx->pc = 0x1efad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936688));
    // 0x1efad4: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1EFAD4u;
    SET_GPR_U32(ctx, 31, 0x1EFADCu);
    ctx->pc = 0x1EFAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAD4u;
            // 0x1efad8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFADCu; }
        if (ctx->pc != 0x1EFADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFADCu; }
        if (ctx->pc != 0x1EFADCu) { return; }
    }
    ctx->pc = 0x1EFADCu;
label_1efadc:
    // 0x1efadc: 0x12a00090  beqz        $s5, . + 4 + (0x90 << 2)
    ctx->pc = 0x1EFADCu;
    {
        const bool branch_taken_0x1efadc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFADCu;
            // 0x1efae0: 0xaf828ec0  sw          $v0, -0x7140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efadc) {
            ctx->pc = 0x1EFD20u;
            goto label_1efd20;
        }
    }
    ctx->pc = 0x1EFAE4u;
    // 0x1efae4: 0x8ea40110  lw          $a0, 0x110($s5)
    ctx->pc = 0x1efae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
    // 0x1efae8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1efae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1efaec: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1efaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x1efaf0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1EFAF0u;
    SET_GPR_U32(ctx, 31, 0x1EFAF8u);
    ctx->pc = 0x1EFAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAF0u;
            // 0x1efaf4: 0x2686000c  addiu       $a2, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFAF8u; }
        if (ctx->pc != 0x1EFAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFAF8u; }
        if (ctx->pc != 0x1EFAF8u) { return; }
    }
    ctx->pc = 0x1EFAF8u;
label_1efaf8:
    // 0x1efaf8: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1efaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x1efafc: 0x8f828eb0  lw          $v0, -0x7150($gp)
    ctx->pc = 0x1efafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1efb00: 0xc0be7cc  jal         func_2F9F30
    ctx->pc = 0x1EFB00u;
    SET_GPR_U32(ctx, 31, 0x1EFB08u);
    ctx->pc = 0x1EFB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB00u;
            // 0x1efb04: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F30u;
    if (runtime->hasFunction(0x2F9F30u)) {
        auto targetFn = runtime->lookupFunction(0x2F9F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB08u; }
        if (ctx->pc != 0x1EFB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawGlidInfo__16CDngFloorManagerFv_0x2f9f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB08u; }
        if (ctx->pc != 0x1EFB08u) { return; }
    }
    ctx->pc = 0x1EFB08u;
label_1efb08:
    // 0x1efb08: 0x86840118  lh          $a0, 0x118($s4)
    ctx->pc = 0x1efb08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1efb0c: 0x8f8294b8  lw          $v0, -0x6B48($gp)
    ctx->pc = 0x1efb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939832)));
    // 0x1efb10: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1efb10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1efb14: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1efb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1efb18: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1efb18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1efb1c: 0x1e000002  bgtz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFB1Cu;
    {
        const bool branch_taken_0x1efb1c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1EFB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB1Cu;
            // 0x1efb20: 0x27828168  addiu       $v0, $gp, -0x7E98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb1c) {
            ctx->pc = 0x1EFB28u;
            goto label_1efb28;
        }
    }
    ctx->pc = 0x1EFB24u;
    // 0x1efb24: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1efb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efb28:
    // 0x1efb28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1efb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1efb2c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1efb2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efb30: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x1efb30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1efb34: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFB34u;
    {
        const bool branch_taken_0x1efb34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efb34) {
            ctx->pc = 0x1EFB40u;
            goto label_1efb40;
        }
    }
    ctx->pc = 0x1EFB3Cu;
    // 0x1efb3c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1efb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efb40:
    // 0x1efb40: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1efb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1efb44: 0xc07aa14  jal         func_1EA850
    ctx->pc = 0x1EFB44u;
    SET_GPR_U32(ctx, 31, 0x1EFB4Cu);
    ctx->pc = 0x1EFB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB44u;
            // 0x1efb48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA850u;
    if (runtime->hasFunction(0x1EA850u)) {
        auto targetFn = runtime->lookupFunction(0x1EA850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB4Cu; }
        if (ctx->pc != 0x1EFB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetUserGlid__11CDngFreeMapFi_0x1ea850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB4Cu; }
        if (ctx->pc != 0x1EFB4Cu) { return; }
    }
    ctx->pc = 0x1EFB4Cu;
label_1efb4c:
    // 0x1efb4c: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1efb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1efb50: 0xc07aacc  jal         func_1EAB30
    ctx->pc = 0x1EFB50u;
    SET_GPR_U32(ctx, 31, 0x1EFB58u);
    ctx->pc = 0x1EFB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB50u;
            // 0x1efb54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB30u;
    if (runtime->hasFunction(0x1EAB30u)) {
        auto targetFn = runtime->lookupFunction(0x1EAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB58u; }
        if (ctx->pc != 0x1EFB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoomGlid__11CDngFreeMapFi_0x1eab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB58u; }
        if (ctx->pc != 0x1EFB58u) { return; }
    }
    ctx->pc = 0x1EFB58u;
label_1efb58:
    // 0x1efb58: 0xae820120  sw          $v0, 0x120($s4)
    ctx->pc = 0x1efb58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
    // 0x1efb5c: 0x8e820120  lw          $v0, 0x120($s4)
    ctx->pc = 0x1efb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x1efb60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFB60u;
    {
        const bool branch_taken_0x1efb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efb60) {
            ctx->pc = 0x1EFB78u;
            goto label_1efb78;
        }
    }
    ctx->pc = 0x1EFB68u;
    // 0x1efb68: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1efb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1efb6c: 0xc07aacc  jal         func_1EAB30
    ctx->pc = 0x1EFB6Cu;
    SET_GPR_U32(ctx, 31, 0x1EFB74u);
    ctx->pc = 0x1EFB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB6Cu;
            // 0x1efb70: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB30u;
    if (runtime->hasFunction(0x1EAB30u)) {
        auto targetFn = runtime->lookupFunction(0x1EAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB74u; }
        if (ctx->pc != 0x1EFB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoomGlid__11CDngFreeMapFi_0x1eab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB74u; }
        if (ctx->pc != 0x1EFB74u) { return; }
    }
    ctx->pc = 0x1EFB74u;
label_1efb74:
    // 0x1efb74: 0xae820120  sw          $v0, 0x120($s4)
    ctx->pc = 0x1efb74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
label_1efb78:
    // 0x1efb78: 0x86830118  lh          $v1, 0x118($s4)
    ctx->pc = 0x1efb78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1efb7c: 0x27828168  addiu       $v0, $gp, -0x7E98
    ctx->pc = 0x1efb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934888));
    // 0x1efb80: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1efb80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efb84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1efb84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efb88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1efb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1efb8c: 0x80520000  lb          $s2, 0x0($v0)
    ctx->pc = 0x1efb8cu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efb90: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1efb90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1efb94: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EFB94u;
    {
        const bool branch_taken_0x1efb94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB94u;
            // 0x1efb98: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb94) {
            ctx->pc = 0x1EFBDCu;
            goto label_1efbdc;
        }
    }
    ctx->pc = 0x1EFB9Cu;
label_1efb9c:
    // 0x1efb9c: 0x8f828eb0  lw          $v0, -0x7150($gp)
    ctx->pc = 0x1efb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1efba0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1efba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1efba4: 0xc0be584  jal         func_2F9610
    ctx->pc = 0x1EFBA4u;
    SET_GPR_U32(ctx, 31, 0x1EFBACu);
    ctx->pc = 0x1EFBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBA4u;
            // 0x1efba8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9610u;
    if (runtime->hasFunction(0x2F9610u)) {
        auto targetFn = runtime->lookupFunction(0x2F9610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBACu; }
        if (ctx->pc != 0x1EFBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorGlidInfo__16CDngFloorManagerFi_0x2f9610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBACu; }
        if (ctx->pc != 0x1EFBACu) { return; }
    }
    ctx->pc = 0x1EFBACu;
label_1efbac:
    // 0x1efbac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EFBACu;
    {
        const bool branch_taken_0x1efbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efbac) {
            ctx->pc = 0x1EFBCCu;
            goto label_1efbcc;
        }
    }
    ctx->pc = 0x1EFBB4u;
    // 0x1efbb4: 0x90430066  lbu         $v1, 0x66($v0)
    ctx->pc = 0x1efbb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 102)));
    // 0x1efbb8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFBB8u;
    {
        const bool branch_taken_0x1efbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efbb8) {
            ctx->pc = 0x1EFBCCu;
            goto label_1efbcc;
        }
    }
    ctx->pc = 0x1EFBC0u;
    // 0x1efbc0: 0x80560028  lb          $s6, 0x28($v0)
    ctx->pc = 0x1efbc0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1efbc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFBC4u;
    {
        const bool branch_taken_0x1efbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBC4u;
            // 0x1efbc8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbc4) {
            ctx->pc = 0x1EFBDCu;
            goto label_1efbdc;
        }
    }
    ctx->pc = 0x1EFBCCu;
label_1efbcc:
    // 0x1efbcc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1efbccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1efbd0: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x1efbd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1efbd4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1EFBD4u;
    {
        const bool branch_taken_0x1efbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efbd4) {
            ctx->pc = 0x1EFB9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1efb9c;
        }
    }
    ctx->pc = 0x1EFBDCu;
label_1efbdc:
    // 0x1efbdc: 0x0  nop
    ctx->pc = 0x1efbdcu;
    // NOP
    // 0x1efbe0: 0x8e830120  lw          $v1, 0x120($s4)
    ctx->pc = 0x1efbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 288)));
    // 0x1efbe4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EFBE4u;
    {
        const bool branch_taken_0x1efbe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efbe4) {
            ctx->pc = 0x1EFC0Cu;
            goto label_1efc0c;
        }
    }
    ctx->pc = 0x1EFBECu;
    // 0x1efbec: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x1efbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1efbf0: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1efbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1efbf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFBF4u;
    {
        const bool branch_taken_0x1efbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBF4u;
            // 0x1efbf8: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbf4) {
            ctx->pc = 0x1EFC04u;
            goto label_1efc04;
        }
    }
    ctx->pc = 0x1EFBFCu;
    // 0x1efbfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFBFCu;
    {
        const bool branch_taken_0x1efbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efbfc) {
            ctx->pc = 0x1EFC0Cu;
            goto label_1efc0c;
        }
    }
    ctx->pc = 0x1EFC04u;
label_1efc04:
    // 0x1efc04: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1efc04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc08: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1efc08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1efc0c:
    // 0x1efc0c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFC0Cu;
    {
        const bool branch_taken_0x1efc0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efc0c) {
            ctx->pc = 0x1EFC18u;
            goto label_1efc18;
        }
    }
    ctx->pc = 0x1EFC14u;
    // 0x1efc14: 0xae910120  sw          $s1, 0x120($s4)
    ctx->pc = 0x1efc14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 17));
label_1efc18:
    // 0x1efc18: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1efc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1efc1c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1efc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc20: 0xc07ab1c  jal         func_1EAC70
    ctx->pc = 0x1EFC20u;
    SET_GPR_U32(ctx, 31, 0x1EFC28u);
    ctx->pc = 0x1EFC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC20u;
            // 0x1efc24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC70u;
    if (runtime->hasFunction(0x1EAC70u)) {
        auto targetFn = runtime->lookupFunction(0x1EAC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFC28u; }
        if (ctx->pc != 0x1EFC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetDngMapPos__11CDngFreeMapFii_0x1eac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFC28u; }
        if (ctx->pc != 0x1EFC28u) { return; }
    }
    ctx->pc = 0x1EFC28u;
label_1efc28:
    // 0x1efc28: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1efc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1efc2c: 0x27b00084  addiu       $s0, $sp, 0x84
    ctx->pc = 0x1efc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1efc30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1efc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc34: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1efc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1efc38: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1efc38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc3c: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1EFC3Cu;
    SET_GPR_U32(ctx, 31, 0x1EFC44u);
    ctx->pc = 0x1EFC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC3Cu;
            // 0x1efc40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFC44u; }
        if (ctx->pc != 0x1EFC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFC44u; }
        if (ctx->pc != 0x1EFC44u) { return; }
    }
    ctx->pc = 0x1EFC44u;
label_1efc44:
    // 0x1efc44: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x1efc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efc48: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1efc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1efc4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1efc4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efc50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1efc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1efc54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1efc58: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1efc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1efc5c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1efc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1efc60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efc64: 0x0  nop
    ctx->pc = 0x1efc64u;
    // NOP
    // 0x1efc68: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1efc68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1efc6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1efc6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efc70: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x1efc70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1efc74: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1efc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1efc78: 0xe6800110  swc1        $f0, 0x110($s4)
    ctx->pc = 0x1efc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 272), bits); }
    // 0x1efc7c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1efc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efc80: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x1EFC80u;
    SET_GPR_U32(ctx, 31, 0x1EFC88u);
    ctx->pc = 0x1EFC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC80u;
            // 0x1efc84: 0xe6800114  swc1        $f0, 0x114($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 276), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFC88u; }
        if (ctx->pc != 0x1EFC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFC88u; }
        if (ctx->pc != 0x1EFC88u) { return; }
    }
    ctx->pc = 0x1EFC88u;
label_1efc88:
    // 0x1efc88: 0x8ea40110  lw          $a0, 0x110($s5)
    ctx->pc = 0x1efc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
    // 0x1efc8c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1efc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1efc90: 0x24a58890  addiu       $a1, $a1, -0x7770
    ctx->pc = 0x1efc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936720));
    // 0x1efc94: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1EFC94u;
    SET_GPR_U32(ctx, 31, 0x1EFC9Cu);
    ctx->pc = 0x1EFC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC94u;
            // 0x1efc98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFC9Cu; }
        if (ctx->pc != 0x1EFC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFC9Cu; }
        if (ctx->pc != 0x1EFC9Cu) { return; }
    }
    ctx->pc = 0x1EFC9Cu;
label_1efc9c:
    // 0x1efc9c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1efca0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1efca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efca4: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1efca4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1efca8: 0xc07bf5c  jal         func_1EFD70
    ctx->pc = 0x1EFCA8u;
    SET_GPR_U32(ctx, 31, 0x1EFCB0u);
    ctx->pc = 0x1EFCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFCA8u;
            // 0x1efcac: 0xac2217b0  sw          $v0, 0x17B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD70u;
    if (runtime->hasFunction(0x1EFD70u)) {
        auto targetFn = runtime->lookupFunction(0x1EFD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFCB0u; }
        if (ctx->pc != 0x1EFCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgInit__12CMenuTreeMapFv_0x1efd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFCB0u; }
        if (ctx->pc != 0x1EFCB0u) { return; }
    }
    ctx->pc = 0x1EFCB0u;
label_1efcb0:
    // 0x1efcb0: 0xc094430  jal         func_2510C0
    ctx->pc = 0x1EFCB0u;
    SET_GPR_U32(ctx, 31, 0x1EFCB8u);
    ctx->pc = 0x1EFCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFCB0u;
            // 0x1efcb4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2510C0u;
    if (runtime->hasFunction(0x2510C0u)) {
        auto targetFn = runtime->lookupFunction(0x2510C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFCB8u; }
        if (ctx->pc != 0x1EFCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCalcBufAlignment__FP1_0x2510c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFCB8u; }
        if (ctx->pc != 0x1EFCB8u) { return; }
    }
    ctx->pc = 0x1EFCB8u;
label_1efcb8:
    // 0x1efcb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1efcb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcbc: 0x3401a0b0  ori         $at, $zero, 0xA0B0
    ctx->pc = 0x1efcbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41136);
    // 0x1efcc0: 0x86820118  lh          $v0, 0x118($s4)
    ctx->pc = 0x1efcc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1efcc4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1efcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1efcc8: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1efcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1efccc: 0x24a588a0  addiu       $a1, $a1, -0x7760
    ctx->pc = 0x1efcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936736));
    // 0x1efcd0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1EFCD0u;
    SET_GPR_U32(ctx, 31, 0x1EFCD8u);
    ctx->pc = 0x1EFCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFCD0u;
            // 0x1efcd4: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFCD8u; }
        if (ctx->pc != 0x1EFCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFCD8u; }
        if (ctx->pc != 0x1EFCD8u) { return; }
    }
    ctx->pc = 0x1EFCD8u;
label_1efcd8:
    // 0x1efcd8: 0x3401a0b0  ori         $at, $zero, 0xA0B0
    ctx->pc = 0x1efcd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41136);
    // 0x1efcdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1efcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efce0: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1efce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1efce4: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x1efce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1efce8: 0xc0524dc  jal         func_149370
    ctx->pc = 0x1EFCE8u;
    SET_GPR_U32(ctx, 31, 0x1EFCF0u);
    ctx->pc = 0x1EFCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFCE8u;
            // 0x1efcec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFCF0u; }
        if (ctx->pc != 0x1EFCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFCF0u; }
        if (ctx->pc != 0x1EFCF0u) { return; }
    }
    ctx->pc = 0x1EFCF0u;
label_1efcf0:
    // 0x1efcf0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EFCF0u;
    {
        const bool branch_taken_0x1efcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efcf0) {
            ctx->pc = 0x1EFD20u;
            goto label_1efd20;
        }
    }
    ctx->pc = 0x1EFCF8u;
    // 0x1efcf8: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x1efcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1efcfc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efcfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1efd00: 0x342117c8  ori         $at, $at, 0x17C8
    ctx->pc = 0x1efd00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6088);
    // 0x1efd04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1efd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd08: 0xc0a37b8  jal         func_28DEE0
    ctx->pc = 0x1EFD08u;
    SET_GPR_U32(ctx, 31, 0x1EFD10u);
    ctx->pc = 0x1EFD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFD08u;
            // 0x1efd0c: 0x2812021  addu        $a0, $s4, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DEE0u;
    if (runtime->hasFunction(0x28DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x28DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFD10u; }
        if (ctx->pc != 0x1EFD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatTresuarBoxInfo__FP22TRESURE_BOX_FLOOR_INFOPci_0x28dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFD10u; }
        if (ctx->pc != 0x1EFD10u) { return; }
    }
    ctx->pc = 0x1EFD10u;
label_1efd10:
    // 0x1efd10: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1efd14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efd18: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1efd18u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1efd1c: 0xa02317c4  sb          $v1, 0x17C4($at)
    ctx->pc = 0x1efd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6084), (uint8_t)GPR_U32(ctx, 3));
label_1efd20:
    // 0x1efd20: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x1efd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1efd24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1efd28: 0xaf808ed8  sw          $zero, -0x7128($gp)
    ctx->pc = 0x1efd28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 0));
    // 0x1efd2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1efd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efd30: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1efd30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1efd34: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1efd34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1efd38: 0xac2417b4  sw          $a0, 0x17B4($at)
    ctx->pc = 0x1efd38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6068), GPR_U32(ctx, 4));
    // 0x1efd3c: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x1efd3cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1efd40: 0x3401a0f0  ori         $at, $zero, 0xA0F0
    ctx->pc = 0x1efd40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41200);
    // 0x1efd44: 0xa6800014  sh          $zero, 0x14($s4)
    ctx->pc = 0x1efd44u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1efd48: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1efd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1efd4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1efd4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1efd50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1efd50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1efd54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1efd54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1efd58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1efd58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1efd5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1efd5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efd60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1efd60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efd64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1efd64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efd68: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFD68u;
            // 0x1efd6c: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFD70u;
}
