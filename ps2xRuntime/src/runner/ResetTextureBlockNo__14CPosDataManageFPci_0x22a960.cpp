#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetTextureBlockNo__14CPosDataManageFPci
// Address: 0x22a960 - 0x22a9f8
void ResetTextureBlockNo__14CPosDataManageFPci_0x22a960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetTextureBlockNo__14CPosDataManageFPci_0x22a960");
#endif

    switch (ctx->pc) {
        case 0x22a990u: goto label_22a990;
        case 0x22a99cu: goto label_22a99c;
        case 0x22a9b0u: goto label_22a9b0;
        default: break;
    }

    ctx->pc = 0x22a960u;

    // 0x22a960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22a960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22a964: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22a964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22a968: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22a968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22a96c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22a96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22a970: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22a970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22a978: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22a978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a97c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a980: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22a980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22a984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a988: 0xc08a9d4  jal         func_22A750
    ctx->pc = 0x22A988u;
    SET_GPR_U32(ctx, 31, 0x22A990u);
    ctx->pc = 0x22A98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A988u;
            // 0x22a98c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A750u;
    if (runtime->hasFunction(0x22A750u)) {
        auto targetFn = runtime->lookupFunction(0x22A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A990u; }
        if (ctx->pc != 0x22A990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfo__14CPosDataManageFi_0x22a750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A990u; }
        if (ctx->pc != 0x22A990u) { return; }
    }
    ctx->pc = 0x22A990u;
label_22a990:
    // 0x22a990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a994: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22A994u;
    {
        const bool branch_taken_0x22a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A994u;
            // 0x22a998: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a994) {
            ctx->pc = 0x22A9C8u;
            goto label_22a9c8;
        }
    }
    ctx->pc = 0x22A99Cu;
label_22a99c:
    // 0x22a99c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x22a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x22a9a0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22A9A0u;
    {
        const bool branch_taken_0x22a9a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A9A0u;
            // 0x22a9a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a9a0) {
            ctx->pc = 0x22A9BCu;
            goto label_22a9bc;
        }
    }
    ctx->pc = 0x22A9A8u;
    // 0x22a9a8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x22A9A8u;
    SET_GPR_U32(ctx, 31, 0x22A9B0u);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9B0u; }
        if (ctx->pc != 0x22A9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9B0u; }
        if (ctx->pc != 0x22A9B0u) { return; }
    }
    ctx->pc = 0x22A9B0u;
label_22a9b0:
    // 0x22a9b0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22A9B0u;
    {
        const bool branch_taken_0x22a9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a9b0) {
            ctx->pc = 0x22A9BCu;
            goto label_22a9bc;
        }
    }
    ctx->pc = 0x22A9B8u;
    // 0x22a9b8: 0xa2120018  sb          $s2, 0x18($s0)
    ctx->pc = 0x22a9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 18));
label_22a9bc:
    // 0x22a9bc: 0x0  nop
    ctx->pc = 0x22a9bcu;
    // NOP
    // 0x22a9c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22a9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22a9c4: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x22a9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_22a9c8:
    // 0x22a9c8: 0x96830014  lhu         $v1, 0x14($s4)
    ctx->pc = 0x22a9c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x22a9cc: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x22a9ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22a9d0: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x22A9D0u;
    {
        const bool branch_taken_0x22a9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a9d0) {
            ctx->pc = 0x22A99Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a99c;
        }
    }
    ctx->pc = 0x22A9D8u;
    // 0x22a9d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22a9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a9dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22a9dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a9e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22a9e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a9e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a9e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a9e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a9ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x22A9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A9F0u;
            // 0x22a9f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A9F8u;
}
