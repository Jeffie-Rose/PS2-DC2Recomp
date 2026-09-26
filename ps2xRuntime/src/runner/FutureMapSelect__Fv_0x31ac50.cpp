#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FutureMapSelect__Fv
// Address: 0x31ac50 - 0x31b0b4
void FutureMapSelect__Fv_0x31ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FutureMapSelect__Fv_0x31ac50");
#endif

    switch (ctx->pc) {
        case 0x31acf0u: goto label_31acf0;
        case 0x31acfcu: goto label_31acfc;
        case 0x31ad04u: goto label_31ad04;
        case 0x31ad14u: goto label_31ad14;
        case 0x31ad44u: goto label_31ad44;
        case 0x31ad68u: goto label_31ad68;
        case 0x31ad9cu: goto label_31ad9c;
        case 0x31adbcu: goto label_31adbc;
        case 0x31ae08u: goto label_31ae08;
        case 0x31ae28u: goto label_31ae28;
        case 0x31ae6cu: goto label_31ae6c;
        case 0x31ae84u: goto label_31ae84;
        case 0x31aed4u: goto label_31aed4;
        case 0x31aee4u: goto label_31aee4;
        case 0x31aef4u: goto label_31aef4;
        case 0x31af08u: goto label_31af08;
        case 0x31af4cu: goto label_31af4c;
        case 0x31af68u: goto label_31af68;
        case 0x31af84u: goto label_31af84;
        case 0x31afa8u: goto label_31afa8;
        case 0x31afd4u: goto label_31afd4;
        case 0x31afecu: goto label_31afec;
        case 0x31b004u: goto label_31b004;
        case 0x31b038u: goto label_31b038;
        case 0x31b050u: goto label_31b050;
        case 0x31b060u: goto label_31b060;
        case 0x31b074u: goto label_31b074;
        case 0x31b084u: goto label_31b084;
        default: break;
    }

    ctx->pc = 0x31ac50u;

    // 0x31ac50: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x31ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
    // 0x31ac54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x31ac58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31ac5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31ac60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31ac64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31ac68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31ac6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31ac70: 0x8382a390  lb          $v0, -0x5C70($gp)
    ctx->pc = 0x31ac70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943632)));
    // 0x31ac74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AC74u;
    {
        const bool branch_taken_0x31ac74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AC74u;
            // 0x31ac78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac74) {
            ctx->pc = 0x31AC84u;
            goto label_31ac84;
        }
    }
    ctx->pc = 0x31AC7Cu;
    // 0x31ac7c: 0xaf80a38c  sw          $zero, -0x5C74($gp)
    ctx->pc = 0x31ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943628), GPR_U32(ctx, 0));
    // 0x31ac80: 0xa382a390  sb          $v0, -0x5C70($gp)
    ctx->pc = 0x31ac80u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943632), (uint8_t)GPR_U32(ctx, 2));
label_31ac84:
    // 0x31ac84: 0x8382a398  lb          $v0, -0x5C68($gp)
    ctx->pc = 0x31ac84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943640)));
    // 0x31ac88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AC88u;
    {
        const bool branch_taken_0x31ac88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ac88) {
            ctx->pc = 0x31AC9Cu;
            goto label_31ac9c;
        }
    }
    ctx->pc = 0x31AC90u;
    // 0x31ac90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ac94: 0xaf80a394  sw          $zero, -0x5C6C($gp)
    ctx->pc = 0x31ac94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943636), GPR_U32(ctx, 0));
    // 0x31ac98: 0xa382a398  sb          $v0, -0x5C68($gp)
    ctx->pc = 0x31ac98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943640), (uint8_t)GPR_U32(ctx, 2));
label_31ac9c:
    // 0x31ac9c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x31ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x31aca0: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x31aca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31aca4: 0x2442e8a0  addiu       $v0, $v0, -0x1760
    ctx->pc = 0x31aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961312));
    // 0x31aca8: 0x27a604d0  addiu       $a2, $sp, 0x4D0
    ctx->pc = 0x31aca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x31acac: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31acacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31acb0: 0x27a504d8  addiu       $a1, $sp, 0x4D8
    ctx->pc = 0x31acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1240));
    // 0x31acb4: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x31acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x31acb8: 0x27a304e8  addiu       $v1, $sp, 0x4E8
    ctx->pc = 0x31acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1256));
    // 0x31acbc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x31acbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31acc0: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x31acc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31acc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31acc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31acc8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x31acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x31accc: 0xdf828648  ld          $v0, -0x79B8($gp)
    ctx->pc = 0x31acccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x31acd0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x31acd0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x31acd4: 0xdf828650  ld          $v0, -0x79B0($gp)
    ctx->pc = 0x31acd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936144)));
    // 0x31acd8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x31acd8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x31acdc: 0xdf828658  ld          $v0, -0x79A8($gp)
    ctx->pc = 0x31acdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936152)));
    // 0x31ace0: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x31ace0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x31ace4: 0xdf828660  ld          $v0, -0x79A0($gp)
    ctx->pc = 0x31ace4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x31ace8: 0xc064220  jal         func_190880
    ctx->pc = 0x31ACE8u;
    SET_GPR_U32(ctx, 31, 0x31ACF0u);
    ctx->pc = 0x31ACECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31ACE8u;
            // 0x31acec: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ACF0u; }
        if (ctx->pc != 0x31ACF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ACF0u; }
        if (ctx->pc != 0x31ACF0u) { return; }
    }
    ctx->pc = 0x31ACF0u;
label_31acf0:
    // 0x31acf0: 0x8f85a394  lw          $a1, -0x5C6C($gp)
    ctx->pc = 0x31acf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943636)));
    // 0x31acf4: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x31ACF4u;
    SET_GPR_U32(ctx, 31, 0x31ACFCu);
    ctx->pc = 0x31ACF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31ACF4u;
            // 0x31acf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ACFCu; }
        if (ctx->pc != 0x31ACFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ACFCu; }
        if (ctx->pc != 0x31ACFCu) { return; }
    }
    ctx->pc = 0x31ACFCu;
label_31acfc:
    // 0x31acfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31acfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31ad00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ad04:
    // 0x31ad04: 0x8f85a394  lw          $a1, -0x5C6C($gp)
    ctx->pc = 0x31ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943636)));
    // 0x31ad08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31ad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad0c: 0xc0aa828  jal         func_2AA0A0
    ctx->pc = 0x31AD0Cu;
    SET_GPR_U32(ctx, 31, 0x31AD14u);
    ctx->pc = 0x31AD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AD0Cu;
            // 0x31ad10: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A0u;
    if (runtime->hasFunction(0x2AA0A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AA0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AD14u; }
        if (ctx->pc != 0x31AD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeData__9CEditDataFii_0x2aa0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AD14u; }
        if (ctx->pc != 0x31AD14u) { return; }
    }
    ctx->pc = 0x31AD14u;
label_31ad14:
    // 0x31ad14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31AD14u;
    {
        const bool branch_taken_0x31ad14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ad14) {
            ctx->pc = 0x31AD2Cu;
            goto label_31ad2c;
        }
    }
    ctx->pc = 0x31AD1Cu;
    // 0x31ad1c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31ad1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x31ad20: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x31ad20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x31ad24: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31AD24u;
    {
        const bool branch_taken_0x31ad24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AD24u;
            // 0x31ad28: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad24) {
            ctx->pc = 0x31AD04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31ad04;
        }
    }
    ctx->pc = 0x31AD2Cu;
label_31ad2c:
    // 0x31ad2c: 0x0  nop
    ctx->pc = 0x31ad2cu;
    // NOP
    // 0x31ad30: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x31ad30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x31ad34: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x31ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x31ad38: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x31ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31ad3c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31AD3Cu;
    SET_GPR_U32(ctx, 31, 0x31AD44u);
    ctx->pc = 0x31AD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AD3Cu;
            // 0x31ad40: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AD44u; }
        if (ctx->pc != 0x31AD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AD44u; }
        if (ctx->pc != 0x31AD44u) { return; }
    }
    ctx->pc = 0x31AD44u;
label_31ad44:
    // 0x31ad44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31AD44u;
    {
        const bool branch_taken_0x31ad44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AD44u;
            // 0x31ad48: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad44) {
            ctx->pc = 0x31AD5Cu;
            goto label_31ad5c;
        }
    }
    ctx->pc = 0x31AD4Cu;
    // 0x31ad4c: 0x8f82a394  lw          $v0, -0x5C6C($gp)
    ctx->pc = 0x31ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943636)));
    // 0x31ad50: 0xaf80a38c  sw          $zero, -0x5C74($gp)
    ctx->pc = 0x31ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943628), GPR_U32(ctx, 0));
    // 0x31ad54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31ad58: 0xaf82a394  sw          $v0, -0x5C6C($gp)
    ctx->pc = 0x31ad58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943636), GPR_U32(ctx, 2));
label_31ad5c:
    // 0x31ad5c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x31ad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31ad60: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31AD60u;
    SET_GPR_U32(ctx, 31, 0x31AD68u);
    ctx->pc = 0x31AD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AD60u;
            // 0x31ad64: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AD68u; }
        if (ctx->pc != 0x31AD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AD68u; }
        if (ctx->pc != 0x31AD68u) { return; }
    }
    ctx->pc = 0x31AD68u;
label_31ad68:
    // 0x31ad68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31AD68u;
    {
        const bool branch_taken_0x31ad68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ad68) {
            ctx->pc = 0x31AD80u;
            goto label_31ad80;
        }
    }
    ctx->pc = 0x31AD70u;
    // 0x31ad70: 0x8f82a394  lw          $v0, -0x5C6C($gp)
    ctx->pc = 0x31ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943636)));
    // 0x31ad74: 0xaf80a38c  sw          $zero, -0x5C74($gp)
    ctx->pc = 0x31ad74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943628), GPR_U32(ctx, 0));
    // 0x31ad78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31ad7c: 0xaf82a394  sw          $v0, -0x5C6C($gp)
    ctx->pc = 0x31ad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943636), GPR_U32(ctx, 2));
label_31ad80:
    // 0x31ad80: 0x8f82a38c  lw          $v0, -0x5C74($gp)
    ctx->pc = 0x31ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943628)));
    // 0x31ad84: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31AD84u;
    {
        const bool branch_taken_0x31ad84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ad84) {
            ctx->pc = 0x31ADF8u;
            goto label_31adf8;
        }
    }
    ctx->pc = 0x31AD8Cu;
    // 0x31ad8c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x31ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x31ad90: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x31ad90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x31ad94: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31AD94u;
    SET_GPR_U32(ctx, 31, 0x31AD9Cu);
    ctx->pc = 0x31AD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AD94u;
            // 0x31ad98: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AD9Cu; }
        if (ctx->pc != 0x31AD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AD9Cu; }
        if (ctx->pc != 0x31AD9Cu) { return; }
    }
    ctx->pc = 0x31AD9Cu;
label_31ad9c:
    // 0x31ad9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AD9Cu;
    {
        const bool branch_taken_0x31ad9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ADA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AD9Cu;
            // 0x31ada0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ad9c) {
            ctx->pc = 0x31ADB0u;
            goto label_31adb0;
        }
    }
    ctx->pc = 0x31ADA4u;
    // 0x31ada4: 0x8f82a394  lw          $v0, -0x5C6C($gp)
    ctx->pc = 0x31ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943636)));
    // 0x31ada8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31adac: 0xaf82a394  sw          $v0, -0x5C6C($gp)
    ctx->pc = 0x31adacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943636), GPR_U32(ctx, 2));
label_31adb0:
    // 0x31adb0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x31adb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31adb4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31ADB4u;
    SET_GPR_U32(ctx, 31, 0x31ADBCu);
    ctx->pc = 0x31ADB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31ADB4u;
            // 0x31adb8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ADBCu; }
        if (ctx->pc != 0x31ADBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31ADBCu; }
        if (ctx->pc != 0x31ADBCu) { return; }
    }
    ctx->pc = 0x31ADBCu;
label_31adbc:
    // 0x31adbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31ADBCu;
    {
        const bool branch_taken_0x31adbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31adbc) {
            ctx->pc = 0x31ADD0u;
            goto label_31add0;
        }
    }
    ctx->pc = 0x31ADC4u;
    // 0x31adc4: 0x8f82a394  lw          $v0, -0x5C6C($gp)
    ctx->pc = 0x31adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943636)));
    // 0x31adc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31adcc: 0xaf82a394  sw          $v0, -0x5C6C($gp)
    ctx->pc = 0x31adccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943636), GPR_U32(ctx, 2));
label_31add0:
    // 0x31add0: 0x8f82a394  lw          $v0, -0x5C6C($gp)
    ctx->pc = 0x31add0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943636)));
    // 0x31add4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31ADD4u;
    {
        const bool branch_taken_0x31add4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31add4) {
            ctx->pc = 0x31ADE0u;
            goto label_31ade0;
        }
    }
    ctx->pc = 0x31ADDCu;
    // 0x31addc: 0xaf80a394  sw          $zero, -0x5C6C($gp)
    ctx->pc = 0x31addcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943636), GPR_U32(ctx, 0));
label_31ade0:
    // 0x31ade0: 0x8f82a394  lw          $v0, -0x5C6C($gp)
    ctx->pc = 0x31ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943636)));
    // 0x31ade4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x31ade4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31ade8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31ADE8u;
    {
        const bool branch_taken_0x31ade8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ade8) {
            ctx->pc = 0x31ADF8u;
            goto label_31adf8;
        }
    }
    ctx->pc = 0x31ADF0u;
    // 0x31adf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31adf4: 0xaf82a394  sw          $v0, -0x5C6C($gp)
    ctx->pc = 0x31adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943636), GPR_U32(ctx, 2));
label_31adf8:
    // 0x31adf8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x31adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x31adfc: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x31adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x31ae00: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31AE00u;
    SET_GPR_U32(ctx, 31, 0x31AE08u);
    ctx->pc = 0x31AE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AE00u;
            // 0x31ae04: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AE08u; }
        if (ctx->pc != 0x31AE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AE08u; }
        if (ctx->pc != 0x31AE08u) { return; }
    }
    ctx->pc = 0x31AE08u;
label_31ae08:
    // 0x31ae08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AE08u;
    {
        const bool branch_taken_0x31ae08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AE08u;
            // 0x31ae0c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae08) {
            ctx->pc = 0x31AE1Cu;
            goto label_31ae1c;
        }
    }
    ctx->pc = 0x31AE10u;
    // 0x31ae10: 0x8f82a38c  lw          $v0, -0x5C74($gp)
    ctx->pc = 0x31ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943628)));
    // 0x31ae14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31ae18: 0xaf82a38c  sw          $v0, -0x5C74($gp)
    ctx->pc = 0x31ae18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943628), GPR_U32(ctx, 2));
label_31ae1c:
    // 0x31ae1c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x31ae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x31ae20: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31AE20u;
    SET_GPR_U32(ctx, 31, 0x31AE28u);
    ctx->pc = 0x31AE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AE20u;
            // 0x31ae24: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AE28u; }
        if (ctx->pc != 0x31AE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AE28u; }
        if (ctx->pc != 0x31AE28u) { return; }
    }
    ctx->pc = 0x31AE28u;
label_31ae28:
    // 0x31ae28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AE28u;
    {
        const bool branch_taken_0x31ae28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ae28) {
            ctx->pc = 0x31AE3Cu;
            goto label_31ae3c;
        }
    }
    ctx->pc = 0x31AE30u;
    // 0x31ae30: 0x8f82a38c  lw          $v0, -0x5C74($gp)
    ctx->pc = 0x31ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943628)));
    // 0x31ae34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31ae38: 0xaf82a38c  sw          $v0, -0x5C74($gp)
    ctx->pc = 0x31ae38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943628), GPR_U32(ctx, 2));
label_31ae3c:
    // 0x31ae3c: 0x8f82a38c  lw          $v0, -0x5C74($gp)
    ctx->pc = 0x31ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943628)));
    // 0x31ae40: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31AE40u;
    {
        const bool branch_taken_0x31ae40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31AE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AE40u;
            // 0x31ae44: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae40) {
            ctx->pc = 0x31AE4Cu;
            goto label_31ae4c;
        }
    }
    ctx->pc = 0x31AE48u;
    // 0x31ae48: 0xaf82a38c  sw          $v0, -0x5C74($gp)
    ctx->pc = 0x31ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943628), GPR_U32(ctx, 2));
label_31ae4c:
    // 0x31ae4c: 0x8f82a38c  lw          $v0, -0x5C74($gp)
    ctx->pc = 0x31ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943628)));
    // 0x31ae50: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x31ae50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x31ae54: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31AE54u;
    {
        const bool branch_taken_0x31ae54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AE54u;
            // 0x31ae58: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae54) {
            ctx->pc = 0x31AE60u;
            goto label_31ae60;
        }
    }
    ctx->pc = 0x31AE5Cu;
    // 0x31ae5c: 0xaf80a38c  sw          $zero, -0x5C74($gp)
    ctx->pc = 0x31ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943628), GPR_U32(ctx, 0));
label_31ae60:
    // 0x31ae60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31ae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae64: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31AE64u;
    SET_GPR_U32(ctx, 31, 0x31AE6Cu);
    ctx->pc = 0x31AE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AE64u;
            // 0x31ae68: 0x24a52b80  addiu       $a1, $a1, 0x2B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AE6Cu; }
        if (ctx->pc != 0x31AE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AE6Cu; }
        if (ctx->pc != 0x31AE6Cu) { return; }
    }
    ctx->pc = 0x31AE6Cu;
label_31ae6c:
    // 0x31ae6c: 0x8f93a394  lw          $s3, -0x5C6C($gp)
    ctx->pc = 0x31ae6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943636)));
    // 0x31ae70: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31ae70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31ae74: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x31ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x31ae78: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x31ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x31ae7c: 0xc0b4a20  jal         func_2D2880
    ctx->pc = 0x31AE7Cu;
    SET_GPR_U32(ctx, 31, 0x31AE84u);
    ctx->pc = 0x31AE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AE7Cu;
            // 0x31ae80: 0x8c440070  lw          $a0, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2880u;
    if (runtime->hasFunction(0x2D2880u)) {
        auto targetFn = runtime->lookupFunction(0x2D2880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AE84u; }
        if (ctx->pc != 0x31AE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapTitle__Fi_0x2d2880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AE84u; }
        if (ctx->pc != 0x31AE84u) { return; }
    }
    ctx->pc = 0x31AE84u;
label_31ae84:
    // 0x31ae84: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x31ae84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x31ae88: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31ae88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31ae8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31ae90: 0x8f87a38c  lw          $a3, -0x5C74($gp)
    ctx->pc = 0x31ae90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943628)));
    // 0x31ae94: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x31ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x31ae98: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x31ae98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae9c: 0x8c6904d8  lw          $t1, 0x4D8($v1)
    ctx->pc = 0x31ae9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1240)));
    // 0x31aea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31aea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aea4: 0x8f86a394  lw          $a2, -0x5C6C($gp)
    ctx->pc = 0x31aea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943636)));
    // 0x31aea8: 0xe01026  xor         $v0, $a3, $zero
    ctx->pc = 0x31aea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 0));
    // 0x31aeac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x31aeacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31aeb0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31aeb4: 0x6102a  slt         $v0, $zero, $a2
    ctx->pc = 0x31aeb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x31aeb8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x31aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x31aebc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31aec0: 0x8c6604d0  lw          $a2, 0x4D0($v1)
    ctx->pc = 0x31aec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1232)));
    // 0x31aec4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x31aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x31aec8: 0x8c4704e0  lw          $a3, 0x4E0($v0)
    ctx->pc = 0x31aec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1248)));
    // 0x31aecc: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31AECCu;
    SET_GPR_U32(ctx, 31, 0x31AED4u);
    ctx->pc = 0x31AED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AECCu;
            // 0x31aed0: 0x24a52b90  addiu       $a1, $a1, 0x2B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AED4u; }
        if (ctx->pc != 0x31AED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AED4u; }
        if (ctx->pc != 0x31AED4u) { return; }
    }
    ctx->pc = 0x31AED4u;
label_31aed4:
    // 0x31aed4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x31aed4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x31aed8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31aed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31aedc: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x31AEDCu;
    {
        const bool branch_taken_0x31aedc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AEDCu;
            // 0x31aee0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aedc) {
            ctx->pc = 0x31AFB8u;
            goto label_31afb8;
        }
    }
    ctx->pc = 0x31AEE4u;
label_31aee4:
    // 0x31aee4: 0x8f85a394  lw          $a1, -0x5C6C($gp)
    ctx->pc = 0x31aee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943636)));
    // 0x31aee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31aee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aeec: 0xc0aa828  jal         func_2AA0A0
    ctx->pc = 0x31AEECu;
    SET_GPR_U32(ctx, 31, 0x31AEF4u);
    ctx->pc = 0x31AEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AEECu;
            // 0x31aef0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A0u;
    if (runtime->hasFunction(0x2AA0A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AA0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AEF4u; }
        if (ctx->pc != 0x31AEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeData__9CEditDataFii_0x2aa0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AEF4u; }
        if (ctx->pc != 0x31AEF4u) { return; }
    }
    ctx->pc = 0x31AEF4u;
label_31aef4:
    // 0x31aef4: 0x8f85a394  lw          $a1, -0x5C6C($gp)
    ctx->pc = 0x31aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943636)));
    // 0x31aef8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x31aef8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aefc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31aefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31af00: 0xc0aa894  jal         func_2AA250
    ctx->pc = 0x31AF00u;
    SET_GPR_U32(ctx, 31, 0x31AF08u);
    ctx->pc = 0x31AF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AF00u;
            // 0x31af04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA250u;
    if (runtime->hasFunction(0x2AA250u)) {
        auto targetFn = runtime->lookupFunction(0x2AA250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AF08u; }
        if (ctx->pc != 0x31AF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeFlag__9CEditDataFii_0x2aa250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AF08u; }
        if (ctx->pc != 0x31AF08u) { return; }
    }
    ctx->pc = 0x31AF08u;
label_31af08:
    // 0x31af08: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x31AF08u;
    {
        const bool branch_taken_0x31af08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AF08u;
            // 0x31af0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af08) {
            ctx->pc = 0x31AF54u;
            goto label_31af54;
        }
    }
    ctx->pc = 0x31AF10u;
    // 0x31af10: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x31af10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x31af14: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31af14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31af18: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x31af18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x31af1c: 0x8f83a38c  lw          $v1, -0x5C74($gp)
    ctx->pc = 0x31af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943628)));
    // 0x31af20: 0x8c4704e8  lw          $a3, 0x4E8($v0)
    ctx->pc = 0x31af20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1256)));
    // 0x31af24: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x31af24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31af28: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x31af28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x31af2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31af2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31af30: 0x661026  xor         $v0, $v1, $a2
    ctx->pc = 0x31af30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x31af34: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x31af34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31af38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31af38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31af3c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x31af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x31af40: 0x8c4604d0  lw          $a2, 0x4D0($v0)
    ctx->pc = 0x31af40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
    // 0x31af44: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31AF44u;
    SET_GPR_U32(ctx, 31, 0x31AF4Cu);
    ctx->pc = 0x31AF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AF44u;
            // 0x31af48: 0x24a52ba8  addiu       $a1, $a1, 0x2BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AF4Cu; }
        if (ctx->pc != 0x31AF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AF4Cu; }
        if (ctx->pc != 0x31AF4Cu) { return; }
    }
    ctx->pc = 0x31AF4Cu;
label_31af4c:
    // 0x31af4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31AF4Cu;
    {
        const bool branch_taken_0x31af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AF4Cu;
            // 0x31af50: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af4c) {
            ctx->pc = 0x31AF68u;
            goto label_31af68;
        }
    }
    ctx->pc = 0x31AF54u;
label_31af54:
    // 0x31af54: 0x0  nop
    ctx->pc = 0x31af54u;
    // NOP
    // 0x31af58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31af58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31af5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31af5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31af60: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31AF60u;
    SET_GPR_U32(ctx, 31, 0x31AF68u);
    ctx->pc = 0x31AF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AF60u;
            // 0x31af64: 0x24a52bb8  addiu       $a1, $a1, 0x2BB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AF68u; }
        if (ctx->pc != 0x31AF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AF68u; }
        if (ctx->pc != 0x31AF68u) { return; }
    }
    ctx->pc = 0x31AF68u;
label_31af68:
    // 0x31af68: 0x8f82a38c  lw          $v0, -0x5C74($gp)
    ctx->pc = 0x31af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943628)));
    // 0x31af6c: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x31af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31af70: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31AF70u;
    {
        const bool branch_taken_0x31af70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AF70u;
            // 0x31af74: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af70) {
            ctx->pc = 0x31AFA8u;
            goto label_31afa8;
        }
    }
    ctx->pc = 0x31AF78u;
    // 0x31af78: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x31af78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x31af7c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31AF7Cu;
    SET_GPR_U32(ctx, 31, 0x31AF84u);
    ctx->pc = 0x31AF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AF7Cu;
            // 0x31af80: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AF84u; }
        if (ctx->pc != 0x31AF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AF84u; }
        if (ctx->pc != 0x31AF84u) { return; }
    }
    ctx->pc = 0x31AF84u;
label_31af84:
    // 0x31af84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31AF84u;
    {
        const bool branch_taken_0x31af84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31af84) {
            ctx->pc = 0x31AFA8u;
            goto label_31afa8;
        }
    }
    ctx->pc = 0x31AF8Cu;
    // 0x31af8c: 0x8f85a394  lw          $a1, -0x5C6C($gp)
    ctx->pc = 0x31af8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943636)));
    // 0x31af90: 0x14102b  sltu        $v0, $zero, $s4
    ctx->pc = 0x31af90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x31af94: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x31af94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x31af98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31af98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31af9c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x31af9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31afa0: 0xc0aa8a8  jal         func_2AA2A0
    ctx->pc = 0x31AFA0u;
    SET_GPR_U32(ctx, 31, 0x31AFA8u);
    ctx->pc = 0x31AFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AFA0u;
            // 0x31afa4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA2A0u;
    if (runtime->hasFunction(0x2AA2A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AA2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AFA8u; }
        if (ctx->pc != 0x31AFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dbgSetAnalyzeFlag__9CEditDataFiii_0x2aa2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AFA8u; }
        if (ctx->pc != 0x31AFA8u) { return; }
    }
    ctx->pc = 0x31AFA8u;
label_31afa8:
    // 0x31afa8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31afa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31afac: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x31afacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x31afb0: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x31AFB0u;
    {
        const bool branch_taken_0x31afb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31afb0) {
            ctx->pc = 0x31AEE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31aee4;
        }
    }
    ctx->pc = 0x31AFB8u;
label_31afb8:
    // 0x31afb8: 0x8f82a38c  lw          $v0, -0x5C74($gp)
    ctx->pc = 0x31afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943628)));
    // 0x31afbc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31AFBCu;
    {
        const bool branch_taken_0x31afbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31afbc) {
            ctx->pc = 0x31AFDCu;
            goto label_31afdc;
        }
    }
    ctx->pc = 0x31AFC4u;
    // 0x31afc4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x31afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x31afc8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x31afc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x31afcc: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31AFCCu;
    SET_GPR_U32(ctx, 31, 0x31AFD4u);
    ctx->pc = 0x31AFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AFCCu;
            // 0x31afd0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AFD4u; }
        if (ctx->pc != 0x31AFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AFD4u; }
        if (ctx->pc != 0x31AFD4u) { return; }
    }
    ctx->pc = 0x31AFD4u;
label_31afd4:
    // 0x31afd4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31AFD4u;
    {
        const bool branch_taken_0x31afd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AFD4u;
            // 0x31afd8: 0x27a40480  addiu       $a0, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31afd4) {
            ctx->pc = 0x31AFF8u;
            goto label_31aff8;
        }
    }
    ctx->pc = 0x31AFDCu;
label_31afdc:
    // 0x31afdc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x31afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x31afe0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x31afe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31afe4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31AFE4u;
    SET_GPR_U32(ctx, 31, 0x31AFECu);
    ctx->pc = 0x31AFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AFE4u;
            // 0x31afe8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AFECu; }
        if (ctx->pc != 0x31AFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AFECu; }
        if (ctx->pc != 0x31AFECu) { return; }
    }
    ctx->pc = 0x31AFECu;
label_31afec:
    // 0x31afec: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x31AFECu;
    {
        const bool branch_taken_0x31afec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31afec) {
            ctx->pc = 0x31B058u;
            goto label_31b058;
        }
    }
    ctx->pc = 0x31AFF4u;
    // 0x31aff4: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x31aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_31aff8:
    // 0x31aff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31aff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31affc: 0xc049c86  jal         func_127218
    ctx->pc = 0x31AFFCu;
    SET_GPR_U32(ctx, 31, 0x31B004u);
    ctx->pc = 0x31B000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AFFCu;
            // 0x31b000: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B004u; }
        if (ctx->pc != 0x31B004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B004u; }
        if (ctx->pc != 0x31B004u) { return; }
    }
    ctx->pc = 0x31B004u;
label_31b004:
    // 0x31b004: 0x8f83a394  lw          $v1, -0x5C6C($gp)
    ctx->pc = 0x31b004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943636)));
    // 0x31b008: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x31b008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x31b00c: 0xafa004c4  sw          $zero, 0x4C4($sp)
    ctx->pc = 0x31b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 0));
    // 0x31b010: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x31b010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x31b014: 0x27b004c8  addiu       $s0, $sp, 0x4C8
    ctx->pc = 0x31b014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1224));
    // 0x31b018: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x31b018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x31b01c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x31b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31b020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31b020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31b024: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x31b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x31b028: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x31b028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x31b02c: 0xafa30480  sw          $v1, 0x480($sp)
    ctx->pc = 0x31b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 3));
    // 0x31b030: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31B030u;
    SET_GPR_U32(ctx, 31, 0x31B038u);
    ctx->pc = 0x31B034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B030u;
            // 0x31b034: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B038u; }
        if (ctx->pc != 0x31B038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B038u; }
        if (ctx->pc != 0x31B038u) { return; }
    }
    ctx->pc = 0x31B038u;
label_31b038:
    // 0x31b038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B038u;
    {
        const bool branch_taken_0x31b038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B038u;
            // 0x31b03c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b038) {
            ctx->pc = 0x31B048u;
            goto label_31b048;
        }
    }
    ctx->pc = 0x31B040u;
    // 0x31b040: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x31b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x31b044: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31b044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_31b048:
    // 0x31b048: 0xc064240  jal         func_190900
    ctx->pc = 0x31B048u;
    SET_GPR_U32(ctx, 31, 0x31B050u);
    ctx->pc = 0x31B04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B048u;
            // 0x31b04c: 0x27a50480  addiu       $a1, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B050u; }
        if (ctx->pc != 0x31B050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B050u; }
        if (ctx->pc != 0x31B050u) { return; }
    }
    ctx->pc = 0x31B050u;
label_31b050:
    // 0x31b050: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x31B050u;
    {
        const bool branch_taken_0x31b050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B050u;
            // 0x31b054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b050) {
            ctx->pc = 0x31B090u;
            goto label_31b090;
        }
    }
    ctx->pc = 0x31B058u;
label_31b058:
    // 0x31b058: 0xc064210  jal         func_190840
    ctx->pc = 0x31B058u;
    SET_GPR_U32(ctx, 31, 0x31B060u);
    ctx->pc = 0x190840u;
    if (runtime->hasFunction(0x190840u)) {
        auto targetFn = runtime->lookupFunction(0x190840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B060u; }
        if (ctx->pc != 0x31B060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDebugFont__Fv_0x190840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B060u; }
        if (ctx->pc != 0x31B060u) { return; }
    }
    ctx->pc = 0x31B060u;
label_31b060:
    // 0x31b060: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x31b060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31b064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31b064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b068: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31b068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31b06c: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x31B06Cu;
    SET_GPR_U32(ctx, 31, 0x31B074u);
    ctx->pc = 0x31B070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B06Cu;
            // 0x31b070: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B074u; }
        if (ctx->pc != 0x31B074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B074u; }
        if (ctx->pc != 0x31B074u) { return; }
    }
    ctx->pc = 0x31B074u;
label_31b074:
    // 0x31b074: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x31b074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x31b078: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x31b078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31b07c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31B07Cu;
    SET_GPR_U32(ctx, 31, 0x31B084u);
    ctx->pc = 0x31B080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B07Cu;
            // 0x31b080: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B084u; }
        if (ctx->pc != 0x31B084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B084u; }
        if (ctx->pc != 0x31B084u) { return; }
    }
    ctx->pc = 0x31B084u;
label_31b084:
    // 0x31b084: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b088: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x31b088u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x31b08c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x31b08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31b090:
    // 0x31b090: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31b090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31b094: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31b094u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31b098: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31b098u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31b09c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31b09cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31b0a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31b0a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b0a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31b0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b0a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x31B0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B0ACu;
            // 0x31b0b0: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31B0B4u;
}
