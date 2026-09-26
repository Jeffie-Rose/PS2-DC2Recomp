#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_CHARA_sub__FiPPciPUi
// Address: 0x262e70 - 0x262fb8
void ps2__LOAD_CHARA_sub__FiPPciPUi_0x262e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_CHARA_sub__FiPPciPUi_0x262e70");
#endif

    switch (ctx->pc) {
        case 0x262eacu: goto label_262eac;
        case 0x262ed8u: goto label_262ed8;
        case 0x262ef4u: goto label_262ef4;
        case 0x262f18u: goto label_262f18;
        case 0x262f2cu: goto label_262f2c;
        case 0x262f40u: goto label_262f40;
        case 0x262f68u: goto label_262f68;
        case 0x262f90u: goto label_262f90;
        default: break;
    }

    ctx->pc = 0x262e70u;

    // 0x262e70: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x262e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
    // 0x262e74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x262e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x262e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x262e7c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x262e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x262e80: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x262e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x262e84: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x262e84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e88: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x262e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x262e8c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x262e8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x262e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x262e94: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x262e94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x262e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x262e9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x262e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x262ea0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x262ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x262ea4: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x262EA4u;
    SET_GPR_U32(ctx, 31, 0x262EACu);
    ctx->pc = 0x262EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262EA4u;
            // 0x262ea8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262EACu; }
        if (ctx->pc != 0x262EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262EACu; }
        if (ctx->pc != 0x262EACu) { return; }
    }
    ctx->pc = 0x262EACu;
label_262eac:
    // 0x262eac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x262eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262eb0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x262eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x262eb4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x262EB4u;
    {
        const bool branch_taken_0x262eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262EB4u;
            // 0x262eb8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262eb4) {
            ctx->pc = 0x262EE8u;
            goto label_262ee8;
        }
    }
    ctx->pc = 0x262EBCu;
    // 0x262ebc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x262ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ec0: 0x24a5c6d0  addiu       $a1, $a1, -0x3930
    ctx->pc = 0x262ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952656));
    // 0x262ec4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x262ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262ec8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x262ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x262ecc: 0x27a80280  addiu       $t0, $sp, 0x280
    ctx->pc = 0x262eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x262ed0: 0xc052788  jal         func_149E20
    ctx->pc = 0x262ED0u;
    SET_GPR_U32(ctx, 31, 0x262ED8u);
    ctx->pc = 0x262ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262ED0u;
            // 0x262ed4: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149E20u;
    if (runtime->hasFunction(0x149E20u)) {
        auto targetFn = runtime->lookupFunction(0x149E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262ED8u; }
        if (ctx->pc != 0x262ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262ED8u; }
        if (ctx->pc != 0x262ED8u) { return; }
    }
    ctx->pc = 0x262ED8u;
label_262ed8:
    // 0x262ed8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262ED8u;
    {
        const bool branch_taken_0x262ed8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x262EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262ED8u;
            // 0x262edc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ed8) {
            ctx->pc = 0x262EE8u;
            goto label_262ee8;
        }
    }
    ctx->pc = 0x262EE0u;
    // 0x262ee0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x262EE0u;
    {
        const bool branch_taken_0x262ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262EE0u;
            // 0x262ee4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ee0) {
            ctx->pc = 0x262F98u;
            goto label_262f98;
        }
    }
    ctx->pc = 0x262EE8u;
label_262ee8:
    // 0x262ee8: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x262ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x262eec: 0xc0a1240  jal         func_284900
    ctx->pc = 0x262EECu;
    SET_GPR_U32(ctx, 31, 0x262EF4u);
    ctx->pc = 0x262EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262EECu;
            // 0x262ef0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262EF4u; }
        if (ctx->pc != 0x262EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262EF4u; }
        if (ctx->pc != 0x262EF4u) { return; }
    }
    ctx->pc = 0x262EF4u;
label_262ef4:
    // 0x262ef4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x262ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ef8: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x262EF8u;
    {
        const bool branch_taken_0x262ef8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x262EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262EF8u;
            // 0x262efc: 0x3c120038  lui         $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ef8) {
            ctx->pc = 0x262F08u;
            goto label_262f08;
        }
    }
    ctx->pc = 0x262F00u;
    // 0x262f00: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x262F00u;
    {
        const bool branch_taken_0x262f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262F00u;
            // 0x262f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f00) {
            ctx->pc = 0x262F94u;
            goto label_262f94;
        }
    }
    ctx->pc = 0x262F08u;
label_262f08:
    // 0x262f08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x262f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f0c: 0x26521ef0  addiu       $s2, $s2, 0x1EF0
    ctx->pc = 0x262f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
    // 0x262f10: 0xc04b950  jal         func_12E540
    ctx->pc = 0x262F10u;
    SET_GPR_U32(ctx, 31, 0x262F18u);
    ctx->pc = 0x262F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262F10u;
            // 0x262f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F18u; }
        if (ctx->pc != 0x262F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F18u; }
        if (ctx->pc != 0x262F18u) { return; }
    }
    ctx->pc = 0x262F18u;
label_262f18:
    // 0x262f18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x262f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x262f1c: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x262f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x262f20: 0x24a5c6d8  addiu       $a1, $a1, -0x3928
    ctx->pc = 0x262f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952664));
    // 0x262f24: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x262F24u;
    SET_GPR_U32(ctx, 31, 0x262F2Cu);
    ctx->pc = 0x262F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262F24u;
            // 0x262f28: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F2Cu; }
        if (ctx->pc != 0x262F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F2Cu; }
        if (ctx->pc != 0x262F2Cu) { return; }
    }
    ctx->pc = 0x262F2Cu;
label_262f2c:
    // 0x262f2c: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x262f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x262f30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262F30u;
    {
        const bool branch_taken_0x262f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262F30u;
            // 0x262f34: 0x264401d8  addiu       $a0, $s2, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f30) {
            ctx->pc = 0x262F40u;
            goto label_262f40;
        }
    }
    ctx->pc = 0x262F38u;
    // 0x262f38: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x262F38u;
    SET_GPR_U32(ctx, 31, 0x262F40u);
    ctx->pc = 0x262F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262F38u;
            // 0x262f3c: 0x27a50480  addiu       $a1, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F40u; }
        if (ctx->pc != 0x262F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F40u; }
        if (ctx->pc != 0x262F40u) { return; }
    }
    ctx->pc = 0x262F40u;
label_262f40:
    // 0x262f40: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x262f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x262f44: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x262f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f48: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x262f48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x262f4c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x262f4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f50: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x262f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x262f54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x262f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f58: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x262f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f5c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x262f5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f60: 0xc0a1458  jal         func_285160
    ctx->pc = 0x262F60u;
    SET_GPR_U32(ctx, 31, 0x262F68u);
    ctx->pc = 0x262F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262F60u;
            // 0x262f64: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F68u; }
        if (ctx->pc != 0x262F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F68u; }
        if (ctx->pc != 0x262F68u) { return; }
    }
    ctx->pc = 0x262F68u;
label_262f68:
    // 0x262f68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x262f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f6c: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x262f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x262f70: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x262F70u;
    {
        const bool branch_taken_0x262f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262f70) {
            ctx->pc = 0x262F7Cu;
            goto label_262f7c;
        }
    }
    ctx->pc = 0x262F78u;
    // 0x262f78: 0xa24001d8  sb          $zero, 0x1D8($s2)
    ctx->pc = 0x262f78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 472), (uint8_t)GPR_U32(ctx, 0));
label_262f7c:
    // 0x262f7c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x262f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x262f80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x262f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262f88: 0xc0a11fc  jal         func_2847F0
    ctx->pc = 0x262F88u;
    SET_GPR_U32(ctx, 31, 0x262F90u);
    ctx->pc = 0x262F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262F88u;
            // 0x262f8c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2847F0u;
    if (runtime->hasFunction(0x2847F0u)) {
        auto targetFn = runtime->lookupFunction(0x2847F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F90u; }
        if (ctx->pc != 0x262F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetType__6CSceneFiii_0x2847f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262F90u; }
        if (ctx->pc != 0x262F90u) { return; }
    }
    ctx->pc = 0x262F90u;
label_262f90:
    // 0x262f90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x262f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262f94:
    // 0x262f94: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x262f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_262f98:
    // 0x262f98: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x262f98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x262f9c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x262f9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x262fa0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x262fa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262fa4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x262fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262fa8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x262fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262fac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x262facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x262FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262FB0u;
            // 0x262fb4: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262FB8u;
}
