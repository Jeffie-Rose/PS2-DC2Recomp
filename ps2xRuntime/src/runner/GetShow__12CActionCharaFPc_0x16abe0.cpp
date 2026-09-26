#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetShow__12CActionCharaFPc
// Address: 0x16abe0 - 0x16ac60
void GetShow__12CActionCharaFPc_0x16abe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetShow__12CActionCharaFPc_0x16abe0");
#endif

    switch (ctx->pc) {
        case 0x16ac10u: goto label_16ac10;
        case 0x16ac18u: goto label_16ac18;
        default: break;
    }

    ctx->pc = 0x16abe0u;

    // 0x16abe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16abe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16abe4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16abe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16abe8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16abe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16abec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16abecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16abf0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16abf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16abf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16abf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16abf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abfc: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x16ABFCu;
    {
        const bool branch_taken_0x16abfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABFCu;
            // 0x16ac00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abfc) {
            ctx->pc = 0x16AC3Cu;
            goto label_16ac3c;
        }
    }
    ctx->pc = 0x16AC04u;
    // 0x16ac04: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16AC04u;
    {
        const bool branch_taken_0x16ac04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC04u;
            // 0x16ac08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac04) {
            ctx->pc = 0x16AC48u;
            goto label_16ac48;
        }
    }
    ctx->pc = 0x16AC0Cu;
    // 0x16ac0c: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x16ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_16ac10:
    // 0x16ac10: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x16AC10u;
    SET_GPR_U32(ctx, 31, 0x16AC18u);
    ctx->pc = 0x16AC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC10u;
            // 0x16ac14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC18u; }
        if (ctx->pc != 0x16AC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC18u; }
        if (ctx->pc != 0x16AC18u) { return; }
    }
    ctx->pc = 0x16AC18u;
label_16ac18:
    // 0x16ac18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AC18u;
    {
        const bool branch_taken_0x16ac18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ac18) {
            ctx->pc = 0x16AC28u;
            goto label_16ac28;
        }
    }
    ctx->pc = 0x16AC20u;
    // 0x16ac20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16AC20u;
    {
        const bool branch_taken_0x16ac20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC20u;
            // 0x16ac24: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac20) {
            ctx->pc = 0x16AC48u;
            goto label_16ac48;
        }
    }
    ctx->pc = 0x16AC28u;
label_16ac28:
    // 0x16ac28: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x16ac28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x16ac2c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16AC2Cu;
    {
        const bool branch_taken_0x16ac2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC2Cu;
            // 0x16ac30: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac2c) {
            ctx->pc = 0x16AC10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16ac10;
        }
    }
    ctx->pc = 0x16AC34u;
    // 0x16ac34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16AC34u;
    {
        const bool branch_taken_0x16ac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ac34) {
            ctx->pc = 0x16AC44u;
            goto label_16ac44;
        }
    }
    ctx->pc = 0x16AC3Cu;
label_16ac3c:
    // 0x16ac3c: 0x8c910064  lw          $s1, 0x64($a0)
    ctx->pc = 0x16ac3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x16ac40: 0x0  nop
    ctx->pc = 0x16ac40u;
    // NOP
label_16ac44:
    // 0x16ac44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16ac44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ac48:
    // 0x16ac48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16ac48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ac4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16ac4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ac50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16ac50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ac54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16ac54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ac58: 0x3e00008  jr          $ra
    ctx->pc = 0x16AC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC58u;
            // 0x16ac5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AC60u;
}
