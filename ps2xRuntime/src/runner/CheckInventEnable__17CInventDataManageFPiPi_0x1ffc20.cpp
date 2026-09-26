#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckInventEnable__17CInventDataManageFPiPi
// Address: 0x1ffc20 - 0x1ffd94
void CheckInventEnable__17CInventDataManageFPiPi_0x1ffc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckInventEnable__17CInventDataManageFPiPi_0x1ffc20");
#endif

    switch (ctx->pc) {
        case 0x1ffc44u: goto label_1ffc44;
        case 0x1ffc58u: goto label_1ffc58;
        case 0x1ffc88u: goto label_1ffc88;
        case 0x1ffca8u: goto label_1ffca8;
        case 0x1ffcf0u: goto label_1ffcf0;
        default: break;
    }

    ctx->pc = 0x1ffc20u;

    // 0x1ffc20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ffc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ffc24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ffc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ffc28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ffc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ffc2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ffc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ffc30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ffc30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ffc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ffc38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ffc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc3c: 0xc07f84c  jal         func_1FE130
    ctx->pc = 0x1FFC3Cu;
    SET_GPR_U32(ctx, 31, 0x1FFC44u);
    ctx->pc = 0x1FFC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFC3Cu;
            // 0x1ffc40: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE130u;
    if (runtime->hasFunction(0x1FE130u)) {
        auto targetFn = runtime->lookupFunction(0x1FE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFC44u; }
        if (ctx->pc != 0x1FFC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventUserDataPtr__Fv_0x1fe130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFC44u; }
        if (ctx->pc != 0x1FFC44u) { return; }
    }
    ctx->pc = 0x1FFC44u;
label_1ffc44:
    // 0x1ffc44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ffc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ffc48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffc50: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1FFC50u;
    {
        const bool branch_taken_0x1ffc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFC50u;
            // 0x1ffc54: 0x27a3004c  addiu       $v1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc50) {
            ctx->pc = 0x1FFD64u;
            goto label_1ffd64;
        }
    }
    ctx->pc = 0x1FFC58u;
label_1ffc58:
    // 0x1ffc58: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1ffc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ffc5c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1ffc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1ffc60: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x1ffc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1ffc64: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x1FFC64u;
    {
        const bool branch_taken_0x1ffc64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffc64) {
            ctx->pc = 0x1FFD5Cu;
            goto label_1ffd5c;
        }
    }
    ctx->pc = 0x1FFC6Cu;
    // 0x1ffc6c: 0x878c90fc  lh          $t4, -0x6F04($gp)
    ctx->pc = 0x1ffc6cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x1ffc70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ffc70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc74: 0x938b90fe  lbu         $t3, -0x6F02($gp)
    ctx->pc = 0x1ffc74u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938878)));
    // 0x1ffc78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ffc78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ffc7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc80: 0xa46c0000  sh          $t4, 0x0($v1)
    ctx->pc = 0x1ffc80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x1ffc84: 0xa06b0002  sb          $t3, 0x2($v1)
    ctx->pc = 0x1ffc84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 11));
label_1ffc88:
    // 0x1ffc88: 0xc85821  addu        $t3, $a2, $t0
    ctx->pc = 0x1ffc88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1ffc8c: 0x856c0000  lh          $t4, 0x0($t3)
    ctx->pc = 0x1ffc8cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1ffc90: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1ffc90u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc94: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1ffc94u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffc98: 0x13d5821  addu        $t3, $t1, $sp
    ctx->pc = 0x1ffc98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x1ffc9c: 0x25780040  addiu       $t8, $t3, 0x40
    ctx->pc = 0x1ffc9cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
    // 0x1ffca0: 0xaf0c0000  sw          $t4, 0x0($t8)
    ctx->pc = 0x1ffca0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 12));
    // 0x1ffca4: 0xfd6021  addu        $t4, $a3, $sp
    ctx->pc = 0x1ffca4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
label_1ffca8:
    // 0x1ffca8: 0x22f5821  addu        $t3, $s1, $t7
    ctx->pc = 0x1ffca8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x1ffcac: 0x8f0d0000  lw          $t5, 0x0($t8)
    ctx->pc = 0x1ffcacu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1ffcb0: 0x8d6b0000  lw          $t3, 0x0($t3)
    ctx->pc = 0x1ffcb0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1ffcb4: 0x15ab0002  bne         $t5, $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFCB4u;
    {
        const bool branch_taken_0x1ffcb4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 11));
        if (branch_taken_0x1ffcb4) {
            ctx->pc = 0x1FFCC0u;
            goto label_1ffcc0;
        }
    }
    ctx->pc = 0x1FFCBCu;
    // 0x1ffcbc: 0xa182004c  sb          $v0, 0x4C($t4)
    ctx->pc = 0x1ffcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 12), 76), (uint8_t)GPR_U32(ctx, 2));
label_1ffcc0:
    // 0x1ffcc0: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1ffcc0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1ffcc4: 0x29cb0003  slti        $t3, $t6, 0x3
    ctx->pc = 0x1ffcc4u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ffcc8: 0x1560fff7  bnez        $t3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FFCC8u;
    {
        const bool branch_taken_0x1ffcc8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFCC8u;
            // 0x1ffccc: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcc8) {
            ctx->pc = 0x1FFCA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ffca8;
        }
    }
    ctx->pc = 0x1FFCD0u;
    // 0x1ffcd0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ffcd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ffcd4: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x1ffcd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1ffcd8: 0x28eb0003  slti        $t3, $a3, 0x3
    ctx->pc = 0x1ffcd8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ffcdc: 0x1560ffea  bnez        $t3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1FFCDCu;
    {
        const bool branch_taken_0x1ffcdc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFCDCu;
            // 0x1ffce0: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcdc) {
            ctx->pc = 0x1FFC88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ffc88;
        }
    }
    ctx->pc = 0x1FFCE4u;
    // 0x1ffce4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ffce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffce8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ffce8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffcec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ffcecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffcf0:
    // 0x1ffcf0: 0x11d3021  addu        $a2, $t0, $sp
    ctx->pc = 0x1ffcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x1ffcf4: 0x90c6004c  lbu         $a2, 0x4C($a2)
    ctx->pc = 0x1ffcf4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x1ffcf8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFCF8u;
    {
        const bool branch_taken_0x1ffcf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFCF8u;
            // 0x1ffcfc: 0x13d3021  addu        $a2, $t1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcf8) {
            ctx->pc = 0x1FFD08u;
            goto label_1ffd08;
        }
    }
    ctx->pc = 0x1FFD00u;
    // 0x1ffd00: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ffd00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ffd04: 0xacc00040  sw          $zero, 0x40($a2)
    ctx->pc = 0x1ffd04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
label_1ffd08:
    // 0x1ffd08: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ffd08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ffd0c: 0x29060003  slti        $a2, $t0, 0x3
    ctx->pc = 0x1ffd0cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ffd10: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FFD10u;
    {
        const bool branch_taken_0x1ffd10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFD10u;
            // 0x1ffd14: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd10) {
            ctx->pc = 0x1FFCF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ffcf0;
        }
    }
    ctx->pc = 0x1FFD18u;
    // 0x1ffd18: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFD18u;
    {
        const bool branch_taken_0x1ffd18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFD18u;
            // 0x1ffd1c: 0x28e60002  slti        $a2, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd18) {
            ctx->pc = 0x1FFD2Cu;
            goto label_1ffd2c;
        }
    }
    ctx->pc = 0x1FFD20u;
    // 0x1ffd20: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFD20u;
    {
        const bool branch_taken_0x1ffd20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd20) {
            ctx->pc = 0x1FFD2Cu;
            goto label_1ffd2c;
        }
    }
    ctx->pc = 0x1FFD28u;
    // 0x1ffd28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ffd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ffd2c:
    // 0x1ffd2c: 0x0  nop
    ctx->pc = 0x1ffd2cu;
    // NOP
    // 0x1ffd30: 0x93a6004c  lbu         $a2, 0x4C($sp)
    ctx->pc = 0x1ffd30u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1ffd34: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FFD34u;
    {
        const bool branch_taken_0x1ffd34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd34) {
            ctx->pc = 0x1FFD5Cu;
            goto label_1ffd5c;
        }
    }
    ctx->pc = 0x1FFD3Cu;
    // 0x1ffd3c: 0x93a6004d  lbu         $a2, 0x4D($sp)
    ctx->pc = 0x1ffd3cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 77)));
    // 0x1ffd40: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FFD40u;
    {
        const bool branch_taken_0x1ffd40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd40) {
            ctx->pc = 0x1FFD5Cu;
            goto label_1ffd5c;
        }
    }
    ctx->pc = 0x1FFD48u;
    // 0x1ffd48: 0x93a6004e  lbu         $a2, 0x4E($sp)
    ctx->pc = 0x1ffd48u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 78)));
    // 0x1ffd4c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFD4Cu;
    {
        const bool branch_taken_0x1ffd4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd4c) {
            ctx->pc = 0x1FFD5Cu;
            goto label_1ffd5c;
        }
    }
    ctx->pc = 0x1FFD54u;
    // 0x1ffd54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FFD54u;
    {
        const bool branch_taken_0x1ffd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFD54u;
            // 0x1ffd58: 0x84a20000  lh          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd54) {
            ctx->pc = 0x1FFD7Cu;
            goto label_1ffd7c;
        }
    }
    ctx->pc = 0x1FFD5Cu;
label_1ffd5c:
    // 0x1ffd5c: 0x254a0024  addiu       $t2, $t2, 0x24
    ctx->pc = 0x1ffd5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 36));
    // 0x1ffd60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ffd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ffd64:
    // 0x1ffd64: 0x0  nop
    ctx->pc = 0x1ffd64u;
    // NOP
    // 0x1ffd68: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x1ffd68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ffd6c: 0x85282a  slt         $a1, $a0, $a1
    ctx->pc = 0x1ffd6cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ffd70: 0x14a0ffb9  bnez        $a1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1FFD70u;
    {
        const bool branch_taken_0x1ffd70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd70) {
            ctx->pc = 0x1FFC58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ffc58;
        }
    }
    ctx->pc = 0x1FFD78u;
    // 0x1ffd78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ffd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ffd7c:
    // 0x1ffd7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ffd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ffd80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ffd80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ffd84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ffd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffd88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ffd88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFD8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFD8Cu;
            // 0x1ffd90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFD94u;
}
