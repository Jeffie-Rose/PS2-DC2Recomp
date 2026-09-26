#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CountPartsInfoID__FiP8CEditMapPii
// Address: 0x316b40 - 0x316bf4
void CountPartsInfoID__FiP8CEditMapPii_0x316b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CountPartsInfoID__FiP8CEditMapPii_0x316b40");
#endif

    switch (ctx->pc) {
        case 0x316b88u: goto label_316b88;
        case 0x316b98u: goto label_316b98;
        case 0x316ba8u: goto label_316ba8;
        default: break;
    }

    ctx->pc = 0x316b40u;

    // 0x316b40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x316b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x316b44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x316b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x316b48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x316b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x316b4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x316b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x316b50: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x316b50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b54: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x316b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x316b58: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x316b58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x316b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x316b60: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x316b60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x316b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x316b68: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x316b68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x316b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x316b70: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x316b70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x316b74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x316b78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x316b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b7c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x316B7Cu;
    {
        const bool branch_taken_0x316b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x316B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316B7Cu;
            // 0x316b80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b7c) {
            ctx->pc = 0x316BC8u;
            goto label_316bc8;
        }
    }
    ctx->pc = 0x316B84u;
    // 0x316b84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x316b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316b88:
    // 0x316b88: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x316b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x316b8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x316b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x316b90: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x316B90u;
    SET_GPR_U32(ctx, 31, 0x316B98u);
    ctx->pc = 0x316B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316B90u;
            // 0x316b94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316B98u; }
        if (ctx->pc != 0x316B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316B98u; }
        if (ctx->pc != 0x316B98u) { return; }
    }
    ctx->pc = 0x316B98u;
label_316b98:
    // 0x316b98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x316B98u;
    {
        const bool branch_taken_0x316b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316B98u;
            // 0x316b9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b98) {
            ctx->pc = 0x316BB4u;
            goto label_316bb4;
        }
    }
    ctx->pc = 0x316BA0u;
    // 0x316ba0: 0xc06d694  jal         func_1B5A50
    ctx->pc = 0x316BA0u;
    SET_GPR_U32(ctx, 31, 0x316BA8u);
    ctx->pc = 0x1B5A50u;
    if (runtime->hasFunction(0x1B5A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316BA8u; }
        if (ctx->pc != 0x316BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInfoID__10CEditPartsFv_0x1b5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316BA8u; }
        if (ctx->pc != 0x316BA8u) { return; }
    }
    ctx->pc = 0x316BA8u;
label_316ba8:
    // 0x316ba8: 0x16c20002  bne         $s6, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x316BA8u;
    {
        const bool branch_taken_0x316ba8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x316ba8) {
            ctx->pc = 0x316BB4u;
            goto label_316bb4;
        }
    }
    ctx->pc = 0x316BB0u;
    // 0x316bb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x316bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_316bb4:
    // 0x316bb4: 0x0  nop
    ctx->pc = 0x316bb4u;
    // NOP
    // 0x316bb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x316bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x316bbc: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x316bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x316bc0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x316BC0u;
    {
        const bool branch_taken_0x316bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316BC0u;
            // 0x316bc4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316bc0) {
            ctx->pc = 0x316B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316b88;
        }
    }
    ctx->pc = 0x316BC8u;
label_316bc8:
    // 0x316bc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x316bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316bcc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x316bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x316bd0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x316bd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x316bd4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x316bd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316bd8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x316bd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316bdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x316bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316be0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x316be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316be4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x316be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316bec: 0x3e00008  jr          $ra
    ctx->pc = 0x316BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316BECu;
            // 0x316bf0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316BF4u;
}
