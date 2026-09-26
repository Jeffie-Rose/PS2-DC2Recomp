#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchHash__17mgCTextureManagerFPci
// Address: 0x12ce90 - 0x12cf40
void SearchHash__17mgCTextureManagerFPci_0x12ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchHash__17mgCTextureManagerFPci_0x12ce90");
#endif

    switch (ctx->pc) {
        case 0x12ceb8u: goto label_12ceb8;
        case 0x12ceccu: goto label_12cecc;
        case 0x12cee0u: goto label_12cee0;
        default: break;
    }

    ctx->pc = 0x12ce90u;

    // 0x12ce90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12ce90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12ce94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12ce94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12ce98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12ce98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12ce9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12ce9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12cea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12cea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12cea4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12cea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cea8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12cea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ceac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12ceacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ceb0: 0xc04b31c  jal         func_12CC70
    ctx->pc = 0x12CEB0u;
    SET_GPR_U32(ctx, 31, 0x12CEB8u);
    ctx->pc = 0x12CC70u;
    if (runtime->hasFunction(0x12CC70u)) {
        auto targetFn = runtime->lookupFunction(0x12CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEB8u; }
        if (ctx->pc != 0x12CEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hash__17mgCTextureManagerFPc_0x12cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEB8u; }
        if (ctx->pc != 0x12CEB8u) { return; }
    }
    ctx->pc = 0x12CEB8u;
label_12ceb8:
    // 0x12ceb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12cebc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12cec0: 0x8c520024  lw          $s2, 0x24($v0)
    ctx->pc = 0x12cec0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x12cec4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x12CEC4u;
    {
        const bool branch_taken_0x12cec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cec4) {
            ctx->pc = 0x12CF18u;
            goto label_12cf18;
        }
    }
    ctx->pc = 0x12CECCu;
label_12cecc:
    // 0x12cecc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ced0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ced0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ced4: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x12ced4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x12ced8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x12CED8u;
    SET_GPR_U32(ctx, 31, 0x12CEE0u);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEE0u; }
        if (ctx->pc != 0x12CEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEE0u; }
        if (ctx->pc != 0x12CEE0u) { return; }
    }
    ctx->pc = 0x12CEE0u;
label_12cee0:
    // 0x12cee0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12CEE0u;
    {
        const bool branch_taken_0x12cee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cee0) {
            ctx->pc = 0x12CF0Cu;
            goto label_12cf0c;
        }
    }
    ctx->pc = 0x12CEE8u;
    // 0x12cee8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CEE8u;
    {
        const bool branch_taken_0x12cee8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x12cee8) {
            ctx->pc = 0x12CF00u;
            goto label_12cf00;
        }
    }
    ctx->pc = 0x12CEF0u;
    // 0x12cef0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12cef4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x12cef4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cef8: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CEF8u;
    {
        const bool branch_taken_0x12cef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x12cef8) {
            ctx->pc = 0x12CF0Cu;
            goto label_12cf0c;
        }
    }
    ctx->pc = 0x12CF00u;
label_12cf00:
    // 0x12cf00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12cf04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12CF04u;
    {
        const bool branch_taken_0x12cf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cf04) {
            ctx->pc = 0x12CF24u;
            goto label_12cf24;
        }
    }
    ctx->pc = 0x12CF0Cu;
label_12cf0c:
    // 0x12cf0c: 0x0  nop
    ctx->pc = 0x12cf0cu;
    // NOP
    // 0x12cf10: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x12cf10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12cf14: 0x0  nop
    ctx->pc = 0x12cf14u;
    // NOP
label_12cf18:
    // 0x12cf18: 0x1640ffec  bnez        $s2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x12CF18u;
    {
        const bool branch_taken_0x12cf18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cf18) {
            ctx->pc = 0x12CECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12cecc;
        }
    }
    ctx->pc = 0x12CF20u;
    // 0x12cf20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12cf20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12cf24:
    // 0x12cf24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12cf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12cf28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12cf28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cf2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12cf2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cf30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12cf30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cf34: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x12cf34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12cf38: 0x3e00008  jr          $ra
    ctx->pc = 0x12CF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12CF40u;
}
