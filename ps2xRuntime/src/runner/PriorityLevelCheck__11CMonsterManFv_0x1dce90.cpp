#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PriorityLevelCheck__11CMonsterManFv
// Address: 0x1dce90 - 0x1dd0c8
void PriorityLevelCheck__11CMonsterManFv_0x1dce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PriorityLevelCheck__11CMonsterManFv_0x1dce90");
#endif

    switch (ctx->pc) {
        case 0x1dceacu: goto label_1dceac;
        case 0x1dcf14u: goto label_1dcf14;
        case 0x1dcf2cu: goto label_1dcf2c;
        case 0x1dcfb4u: goto label_1dcfb4;
        case 0x1dd094u: goto label_1dd094;
        default: break;
    }

    ctx->pc = 0x1dce90u;

    // 0x1dce90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dce90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dce94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dce94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dce98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dce9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcea0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dcea0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcea4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dcea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcea8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1dcea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dceac:
    // 0x1dceac: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x1dceacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1dceb0: 0x24ab0484  addiu       $t3, $a1, 0x484
    ctx->pc = 0x1dceb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 1156));
    // 0x1dceb4: 0x8ca50484  lw          $a1, 0x484($a1)
    ctx->pc = 0x1dceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1156)));
    // 0x1dceb8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DCEB8u;
    {
        const bool branch_taken_0x1dceb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dceb8) {
            ctx->pc = 0x1DCEECu;
            goto label_1dceec;
        }
    }
    ctx->pc = 0x1DCEC0u;
    // 0x1dcec0: 0xa4a712f0  sh          $a3, 0x12F0($a1)
    ctx->pc = 0x1dcec0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4848), (uint16_t)GPR_U32(ctx, 7));
    // 0x1dcec4: 0x8d6b0000  lw          $t3, 0x0($t3)
    ctx->pc = 0x1dcec4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1dcec8: 0x8565068a  lh          $a1, 0x68A($t3)
    ctx->pc = 0x1dcec8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 1674)));
    // 0x1dcecc: 0x14a60007  bne         $a1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DCECCu;
    {
        const bool branch_taken_0x1dcecc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1dcecc) {
            ctx->pc = 0x1DCEECu;
            goto label_1dceec;
        }
    }
    ctx->pc = 0x1DCED4u;
    // 0x1dced4: 0x8d651330  lw          $a1, 0x1330($t3)
    ctx->pc = 0x1dced4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4912)));
    // 0x1dced8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCED8u;
    {
        const bool branch_taken_0x1dced8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCED8u;
            // 0x1dcedc: 0x15d2821  addu        $a1, $t2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dced8) {
            ctx->pc = 0x1DCEECu;
            goto label_1dceec;
        }
    }
    ctx->pc = 0x1DCEE0u;
    // 0x1dcee0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dcee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dcee4: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x1dcee4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x1dcee8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1dcee8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_1dceec:
    // 0x1dceec: 0x0  nop
    ctx->pc = 0x1dceecu;
    // NOP
    // 0x1dcef0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dcef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1dcef4: 0x29050018  slti        $a1, $t0, 0x18
    ctx->pc = 0x1dcef4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1dcef8: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DCEF8u;
    {
        const bool branch_taken_0x1dcef8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCEF8u;
            // 0x1dcefc: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcef8) {
            ctx->pc = 0x1DCEACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dceac;
        }
    }
    ctx->pc = 0x1DCF00u;
    // 0x1dcf00: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x1dcf00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dcf04: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1dcf04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1dcf08: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x1DCF08u;
    {
        const bool branch_taken_0x1dcf08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF08u;
            // 0x1dcf0c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf08) {
            ctx->pc = 0x1DCF98u;
            goto label_1dcf98;
        }
    }
    ctx->pc = 0x1DCF10u;
    // 0x1dcf10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dcf10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcf14:
    // 0x1dcf14: 0x25e80001  addiu       $t0, $t7, 0x1
    ctx->pc = 0x1dcf14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dcf18: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x1dcf18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dcf1c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DCF1Cu;
    {
        const bool branch_taken_0x1dcf1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF1Cu;
            // 0x1dcf20: 0x84880  sll         $t1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf1c) {
            ctx->pc = 0x1DCF88u;
            goto label_1dcf88;
        }
    }
    ctx->pc = 0x1DCF24u;
    // 0x1dcf24: 0x15d2821  addu        $a1, $t2, $sp
    ctx->pc = 0x1dcf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x1dcf28: 0x24ad0000  addiu       $t5, $a1, 0x0
    ctx->pc = 0x1dcf28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_1dcf2c:
    // 0x1dcf2c: 0x0  nop
    ctx->pc = 0x1dcf2cu;
    // NOP
    // 0x1dcf30: 0x8dab0000  lw          $t3, 0x0($t5)
    ctx->pc = 0x1dcf30u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1dcf34: 0x13d2821  addu        $a1, $t1, $sp
    ctx->pc = 0x1dcf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x1dcf38: 0x24ae0000  addiu       $t6, $a1, 0x0
    ctx->pc = 0x1dcf38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x1dcf3c: 0x8dcc0000  lw          $t4, 0x0($t6)
    ctx->pc = 0x1dcf3cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1dcf40: 0xb2880  sll         $a1, $t3, 2
    ctx->pc = 0x1dcf40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1dcf44: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1dcf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1dcf48: 0x8ca60484  lw          $a2, 0x484($a1)
    ctx->pc = 0x1dcf48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1156)));
    // 0x1dcf4c: 0xc2880  sll         $a1, $t4, 2
    ctx->pc = 0x1dcf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1dcf50: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1dcf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1dcf54: 0x8ca50484  lw          $a1, 0x484($a1)
    ctx->pc = 0x1dcf54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1156)));
    // 0x1dcf58: 0xc4c112f4  lwc1        $f1, 0x12F4($a2)
    ctx->pc = 0x1dcf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcf5c: 0xc4a012f4  lwc1        $f0, 0x12F4($a1)
    ctx->pc = 0x1dcf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcf60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dcf60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcf64: 0x0  nop
    ctx->pc = 0x1dcf64u;
    // NOP
    // 0x1dcf68: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCF68u;
    {
        const bool branch_taken_0x1dcf68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcf68) {
            ctx->pc = 0x1DCF78u;
            goto label_1dcf78;
        }
    }
    ctx->pc = 0x1DCF70u;
    // 0x1dcf70: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x1dcf70u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
    // 0x1dcf74: 0xadcb0000  sw          $t3, 0x0($t6)
    ctx->pc = 0x1dcf74u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
label_1dcf78:
    // 0x1dcf78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dcf78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1dcf7c: 0x103282a  slt         $a1, $t0, $v1
    ctx->pc = 0x1dcf7cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dcf80: 0x14a0ffea  bnez        $a1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1DCF80u;
    {
        const bool branch_taken_0x1dcf80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF80u;
            // 0x1dcf84: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf80) {
            ctx->pc = 0x1DCF2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dcf2c;
        }
    }
    ctx->pc = 0x1DCF88u;
label_1dcf88:
    // 0x1dcf88: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1dcf88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dcf8c: 0x1e7282a  slt         $a1, $t7, $a3
    ctx->pc = 0x1dcf8cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1dcf90: 0x14a0ffe0  bnez        $a1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1DCF90u;
    {
        const bool branch_taken_0x1dcf90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF90u;
            // 0x1dcf94: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf90) {
            ctx->pc = 0x1DCF14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dcf14;
        }
    }
    ctx->pc = 0x1DCF98u;
label_1dcf98:
    // 0x1dcf98: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1dcf98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dcf9c: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x1DCF9Cu;
    {
        const bool branch_taken_0x1dcf9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCF9Cu;
            // 0x1dcfa0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf9c) {
            ctx->pc = 0x1DD0BCu;
            goto label_1dd0bc;
        }
    }
    ctx->pc = 0x1DCFA4u;
    // 0x1dcfa4: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x1dcfa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1dcfa8: 0x14200037  bnez        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x1DCFA8u;
    {
        const bool branch_taken_0x1dcfa8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCFA8u;
            // 0x1dcfac: 0x2465fff8  addiu       $a1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcfa8) {
            ctx->pc = 0x1DD088u;
            goto label_1dd088;
        }
    }
    ctx->pc = 0x1DCFB0u;
    // 0x1dcfb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dcfb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcfb4:
    // 0x1dcfb4: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x1dcfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x1dcfb8: 0x25190001  addiu       $t9, $t0, 0x1
    ctx->pc = 0x1dcfb8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1dcfbc: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x1dcfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
    // 0x1dcfc0: 0x25180002  addiu       $t8, $t0, 0x2
    ctx->pc = 0x1dcfc0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1dcfc4: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x1dcfc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dcfc8: 0x250f0003  addiu       $t7, $t0, 0x3
    ctx->pc = 0x1dcfc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x1dcfcc: 0x250e0004  addiu       $t6, $t0, 0x4
    ctx->pc = 0x1dcfccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1dcfd0: 0x250d0005  addiu       $t5, $t0, 0x5
    ctx->pc = 0x1dcfd0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1dcfd4: 0x250c0006  addiu       $t4, $t0, 0x6
    ctx->pc = 0x1dcfd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x1dcfd8: 0x250a0007  addiu       $t2, $t0, 0x7
    ctx->pc = 0x1dcfd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x1dcfdc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1dcfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1dcfe0: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1dcfe0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1dcfe4: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x1dcfe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1dcfe8: 0x8d290484  lw          $t1, 0x484($t1)
    ctx->pc = 0x1dcfe8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1156)));
    // 0x1dcfec: 0xa52812f0  sh          $t0, 0x12F0($t1)
    ctx->pc = 0x1dcfecu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4848), (uint16_t)GPR_U32(ctx, 8));
    // 0x1dcff0: 0x8ceb0004  lw          $t3, 0x4($a3)
    ctx->pc = 0x1dcff0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1dcff4: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1dcff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1dcff8: 0x105482a  slt         $t1, $t0, $a1
    ctx->pc = 0x1dcff8u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1dcffc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1dcffcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1dd000: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x1dd000u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1dd004: 0x8d6b0484  lw          $t3, 0x484($t3)
    ctx->pc = 0x1dd004u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1156)));
    // 0x1dd008: 0xa57912f0  sh          $t9, 0x12F0($t3)
    ctx->pc = 0x1dd008u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4848), (uint16_t)GPR_U32(ctx, 25));
    // 0x1dd00c: 0x8ceb0008  lw          $t3, 0x8($a3)
    ctx->pc = 0x1dd00cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1dd010: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1dd010u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1dd014: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x1dd014u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1dd018: 0x8d6b0484  lw          $t3, 0x484($t3)
    ctx->pc = 0x1dd018u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1156)));
    // 0x1dd01c: 0xa57812f0  sh          $t8, 0x12F0($t3)
    ctx->pc = 0x1dd01cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4848), (uint16_t)GPR_U32(ctx, 24));
    // 0x1dd020: 0x8ceb000c  lw          $t3, 0xC($a3)
    ctx->pc = 0x1dd020u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1dd024: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1dd024u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1dd028: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x1dd028u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1dd02c: 0x8d6b0484  lw          $t3, 0x484($t3)
    ctx->pc = 0x1dd02cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1156)));
    // 0x1dd030: 0xa56f12f0  sh          $t7, 0x12F0($t3)
    ctx->pc = 0x1dd030u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4848), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dd034: 0x8ceb0010  lw          $t3, 0x10($a3)
    ctx->pc = 0x1dd034u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1dd038: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1dd038u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1dd03c: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x1dd03cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1dd040: 0x8d6b0484  lw          $t3, 0x484($t3)
    ctx->pc = 0x1dd040u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1156)));
    // 0x1dd044: 0xa56e12f0  sh          $t6, 0x12F0($t3)
    ctx->pc = 0x1dd044u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4848), (uint16_t)GPR_U32(ctx, 14));
    // 0x1dd048: 0x8ceb0014  lw          $t3, 0x14($a3)
    ctx->pc = 0x1dd048u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1dd04c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1dd04cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1dd050: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x1dd050u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1dd054: 0x8d6b0484  lw          $t3, 0x484($t3)
    ctx->pc = 0x1dd054u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1156)));
    // 0x1dd058: 0xa56d12f0  sh          $t5, 0x12F0($t3)
    ctx->pc = 0x1dd058u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4848), (uint16_t)GPR_U32(ctx, 13));
    // 0x1dd05c: 0x8ceb0018  lw          $t3, 0x18($a3)
    ctx->pc = 0x1dd05cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1dd060: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1dd060u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1dd064: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x1dd064u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1dd068: 0x8d6b0484  lw          $t3, 0x484($t3)
    ctx->pc = 0x1dd068u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1156)));
    // 0x1dd06c: 0xa56c12f0  sh          $t4, 0x12F0($t3)
    ctx->pc = 0x1dd06cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4848), (uint16_t)GPR_U32(ctx, 12));
    // 0x1dd070: 0x8ce7001c  lw          $a3, 0x1C($a3)
    ctx->pc = 0x1dd070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1dd074: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1dd074u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1dd078: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x1dd078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1dd07c: 0x8ce70484  lw          $a3, 0x484($a3)
    ctx->pc = 0x1dd07cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1156)));
    // 0x1dd080: 0x1520ffcc  bnez        $t1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1DD080u;
    {
        const bool branch_taken_0x1dd080 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD080u;
            // 0x1dd084: 0xa4ea12f0  sh          $t2, 0x12F0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 4848), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd080) {
            ctx->pc = 0x1DCFB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dcfb4;
        }
    }
    ctx->pc = 0x1DD088u;
label_1dd088:
    // 0x1dd088: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x1dd088u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dd08c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1DD08Cu;
    {
        const bool branch_taken_0x1dd08c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD08Cu;
            // 0x1dd090: 0x83080  sll         $a2, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd08c) {
            ctx->pc = 0x1DD0BCu;
            goto label_1dd0bc;
        }
    }
    ctx->pc = 0x1DD094u;
label_1dd094:
    // 0x1dd094: 0xdd2821  addu        $a1, $a2, $sp
    ctx->pc = 0x1dd094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x1dd098: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1dd098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd09c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1dd09cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1dd0a0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1dd0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1dd0a4: 0x8ca50484  lw          $a1, 0x484($a1)
    ctx->pc = 0x1dd0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1156)));
    // 0x1dd0a8: 0xa4a812f0  sh          $t0, 0x12F0($a1)
    ctx->pc = 0x1dd0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4848), (uint16_t)GPR_U32(ctx, 8));
    // 0x1dd0ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dd0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1dd0b0: 0x103282a  slt         $a1, $t0, $v1
    ctx->pc = 0x1dd0b0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dd0b4: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DD0B4u;
    {
        const bool branch_taken_0x1dd0b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0B4u;
            // 0x1dd0b8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0b4) {
            ctx->pc = 0x1DD094u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dd094;
        }
    }
    ctx->pc = 0x1DD0BCu;
label_1dd0bc:
    // 0x1dd0bc: 0x0  nop
    ctx->pc = 0x1dd0bcu;
    // NOP
    // 0x1dd0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD0C0u;
            // 0x1dd0c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD0C8u;
}
