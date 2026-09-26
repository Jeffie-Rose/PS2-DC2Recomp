#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12CMenuKeyFuncFv
// Address: 0x23bc90 - 0x23bd60
void Initialize__12CMenuKeyFuncFv_0x23bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12CMenuKeyFuncFv_0x23bc90");
#endif

    switch (ctx->pc) {
        case 0x23bcacu: goto label_23bcac;
        case 0x23bce0u: goto label_23bce0;
        case 0x23bd1cu: goto label_23bd1c;
        default: break;
    }

    ctx->pc = 0x23bc90u;

    // 0x23bc90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bc94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23bc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bc98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23bc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23bc9c: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x23bc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x23bca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23bca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23bca4: 0xc049c86  jal         func_127218
    ctx->pc = 0x23BCA4u;
    SET_GPR_U32(ctx, 31, 0x23BCACu);
    ctx->pc = 0x23BCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BCA4u;
            // 0x23bca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BCACu; }
        if (ctx->pc != 0x23BCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BCACu; }
        if (ctx->pc != 0x23BCACu) { return; }
    }
    ctx->pc = 0x23BCACu;
label_23bcac:
    // 0x23bcac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23bcb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23bcb4: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x23bcb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23bcb8: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x23bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x23bcbc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x23bcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23bcc0: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x23bcc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x23bcc4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x23bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x23bcc8: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x23bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x23bccc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x23bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x23bcd0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x23bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x23bcd4: 0xa6000068  sh          $zero, 0x68($s0)
    ctx->pc = 0x23bcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x23bcd8: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x23BCD8u;
    SET_GPR_U32(ctx, 31, 0x23BCE0u);
    ctx->pc = 0x23BCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BCD8u;
            // 0x23bcdc: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BCE0u; }
        if (ctx->pc != 0x23BCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BCE0u; }
        if (ctx->pc != 0x23BCE0u) { return; }
    }
    ctx->pc = 0x23BCE0u;
label_23bce0:
    // 0x23bce0: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x23bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x23bce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23bce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bce8: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x23bce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
    // 0x23bcec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23bcecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bcf0: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x23bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x23bcf4: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x23bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x23bcf8: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x23bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
    // 0x23bcfc: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x23bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x23bd00: 0xa600005c  sh          $zero, 0x5C($s0)
    ctx->pc = 0x23bd00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x23bd04: 0xa600005e  sh          $zero, 0x5E($s0)
    ctx->pc = 0x23bd04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 0));
    // 0x23bd08: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x23bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x23bd0c: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x23bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x23bd10: 0xa6000158  sh          $zero, 0x158($s0)
    ctx->pc = 0x23bd10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 0));
    // 0x23bd14: 0xa600015a  sh          $zero, 0x15A($s0)
    ctx->pc = 0x23bd14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 0));
    // 0x23bd18: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23bd1c:
    // 0x23bd1c: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x23bd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x23bd20: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23bd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x23bd24: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x23bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x23bd28: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x23bd28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x23bd2c: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x23bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x23bd30: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x23bd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x23bd34: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x23bd34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x23bd38: 0xace40018  sw          $a0, 0x18($a3)
    ctx->pc = 0x23bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
    // 0x23bd3c: 0xace4001c  sw          $a0, 0x1C($a3)
    ctx->pc = 0x23bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 4));
    // 0x23bd40: 0xace40020  sw          $a0, 0x20($a3)
    ctx->pc = 0x23bd40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 4));
    // 0x23bd44: 0xace40024  sw          $a0, 0x24($a3)
    ctx->pc = 0x23bd44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 4));
    // 0x23bd48: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x23BD48u;
    {
        const bool branch_taken_0x23bd48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD48u;
            // 0x23bd4c: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd48) {
            ctx->pc = 0x23BD1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23bd1c;
        }
    }
    ctx->pc = 0x23BD50u;
    // 0x23bd50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23bd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bd54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23bd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bd58: 0x3e00008  jr          $ra
    ctx->pc = 0x23BD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD58u;
            // 0x23bd5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23BD60u;
}
