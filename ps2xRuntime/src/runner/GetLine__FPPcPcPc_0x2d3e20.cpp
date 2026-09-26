#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLine__FPPcPcPc
// Address: 0x2d3e20 - 0x2d3fc0
void GetLine__FPPcPcPc_0x2d3e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLine__FPPcPcPc_0x2d3e20");
#endif

    switch (ctx->pc) {
        case 0x2d3e68u: goto label_2d3e68;
        case 0x2d3e74u: goto label_2d3e74;
        case 0x2d3e90u: goto label_2d3e90;
        case 0x2d3eb0u: goto label_2d3eb0;
        case 0x2d3ec8u: goto label_2d3ec8;
        case 0x2d3ed8u: goto label_2d3ed8;
        case 0x2d3eecu: goto label_2d3eec;
        case 0x2d3f00u: goto label_2d3f00;
        default: break;
    }

    ctx->pc = 0x2d3e20u;

    // 0x2d3e20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d3e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d3e24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d3e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d3e28: 0x27a3007c  addiu       $v1, $sp, 0x7C
    ctx->pc = 0x2d3e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2d3e2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d3e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d3e30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d3e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d3e34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d3e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d3e38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d3e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d3e3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d3e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d3e40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d3e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d3e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d3e48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d3e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e4c: 0x87828550  lh          $v0, -0x7AB0($gp)
    ctx->pc = 0x2d3e4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935888)));
    // 0x2d3e50: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2d3e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e54: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x2d3e54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d3e58: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x2D3E58u;
    {
        const bool branch_taken_0x2d3e58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3E58u;
            // 0x2d3e5c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e58) {
            ctx->pc = 0x2D3F94u;
            goto label_2d3f94;
        }
    }
    ctx->pc = 0x2D3E60u;
    // 0x2d3e60: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d3e60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e64: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x2d3e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_2d3e68:
    // 0x2d3e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e6c: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x2D3E6Cu;
    SET_GPR_U32(ctx, 31, 0x2D3E74u);
    ctx->pc = 0x2D3E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3E6Cu;
            // 0x2d3e70: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3E74u; }
        if (ctx->pc != 0x2D3E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3E74u; }
        if (ctx->pc != 0x2D3E74u) { return; }
    }
    ctx->pc = 0x2D3E74u;
label_2d3e74:
    // 0x2d3e74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3E74u;
    {
        const bool branch_taken_0x2d3e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3E74u;
            // 0x2d3e78: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e74) {
            ctx->pc = 0x2D3E84u;
            goto label_2d3e84;
        }
    }
    ctx->pc = 0x2D3E7Cu;
    // 0x2d3e7c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2D3E7Cu;
    {
        const bool branch_taken_0x2d3e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3E7Cu;
            // 0x2d3e80: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e7c) {
            ctx->pc = 0x2D3F94u;
            goto label_2d3f94;
        }
    }
    ctx->pc = 0x2D3E84u;
label_2d3e84:
    // 0x2d3e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e88: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x2D3E88u;
    SET_GPR_U32(ctx, 31, 0x2D3E90u);
    ctx->pc = 0x2D3E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3E88u;
            // 0x2d3e8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3E90u; }
        if (ctx->pc != 0x2D3E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3E90u; }
        if (ctx->pc != 0x2D3E90u) { return; }
    }
    ctx->pc = 0x2D3E90u;
label_2d3e90:
    // 0x2d3e90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3E90u;
    {
        const bool branch_taken_0x2d3e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3E90u;
            // 0x2d3e94: 0x27b5007d  addiu       $s5, $sp, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e90) {
            ctx->pc = 0x2D3EA0u;
            goto label_2d3ea0;
        }
    }
    ctx->pc = 0x2D3E98u;
    // 0x2d3e98: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2D3E98u;
    {
        const bool branch_taken_0x2d3e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3E98u;
            // 0x2d3e9c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e98) {
            ctx->pc = 0x2D3F94u;
            goto label_2d3f94;
        }
    }
    ctx->pc = 0x2D3EA0u;
label_2d3ea0:
    // 0x2d3ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ea4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d3ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ea8: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x2D3EA8u;
    SET_GPR_U32(ctx, 31, 0x2D3EB0u);
    ctx->pc = 0x2D3EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3EA8u;
            // 0x2d3eac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3EB0u; }
        if (ctx->pc != 0x2D3EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3EB0u; }
        if (ctx->pc != 0x2D3EB0u) { return; }
    }
    ctx->pc = 0x2D3EB0u;
label_2d3eb0:
    // 0x2d3eb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3EB0u;
    {
        const bool branch_taken_0x2d3eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3EB0u;
            // 0x2d3eb4: 0x230082b  sltu        $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3eb0) {
            ctx->pc = 0x2D3EC0u;
            goto label_2d3ec0;
        }
    }
    ctx->pc = 0x2D3EB8u;
    // 0x2d3eb8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2D3EB8u;
    {
        const bool branch_taken_0x2d3eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3EB8u;
            // 0x2d3ebc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3eb8) {
            ctx->pc = 0x2D3F94u;
            goto label_2d3f94;
        }
    }
    ctx->pc = 0x2D3EC0u;
label_2d3ec0:
    // 0x2d3ec0: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D3EC0u;
    {
        const bool branch_taken_0x2d3ec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3EC0u;
            // 0x2d3ec4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ec0) {
            ctx->pc = 0x2D3F68u;
            goto label_2d3f68;
        }
    }
    ctx->pc = 0x2D3EC8u;
label_2d3ec8:
    // 0x2d3ec8: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x2d3ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2d3ecc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ed0: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x2D3ED0u;
    SET_GPR_U32(ctx, 31, 0x2D3ED8u);
    ctx->pc = 0x2D3ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3ED0u;
            // 0x2d3ed4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3ED8u; }
        if (ctx->pc != 0x2D3ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3ED8u; }
        if (ctx->pc != 0x2D3ED8u) { return; }
    }
    ctx->pc = 0x2D3ED8u;
label_2d3ed8:
    // 0x2d3ed8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D3ED8u;
    {
        const bool branch_taken_0x2d3ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3ED8u;
            // 0x2d3edc: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ed8) {
            ctx->pc = 0x2D3F68u;
            goto label_2d3f68;
        }
    }
    ctx->pc = 0x2D3EE0u;
    // 0x2d3ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ee4: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x2D3EE4u;
    SET_GPR_U32(ctx, 31, 0x2D3EECu);
    ctx->pc = 0x2D3EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3EE4u;
            // 0x2d3ee8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3EECu; }
        if (ctx->pc != 0x2D3EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3EECu; }
        if (ctx->pc != 0x2D3EECu) { return; }
    }
    ctx->pc = 0x2D3EECu;
label_2d3eec:
    // 0x2d3eec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D3EECu;
    {
        const bool branch_taken_0x2d3eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3EECu;
            // 0x2d3ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3eec) {
            ctx->pc = 0x2D3F68u;
            goto label_2d3f68;
        }
    }
    ctx->pc = 0x2D3EF4u;
    // 0x2d3ef4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d3ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ef8: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x2D3EF8u;
    SET_GPR_U32(ctx, 31, 0x2D3F00u);
    ctx->pc = 0x2D3EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3EF8u;
            // 0x2d3efc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3F00u; }
        if (ctx->pc != 0x2D3F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3F00u; }
        if (ctx->pc != 0x2D3F00u) { return; }
    }
    ctx->pc = 0x2D3F00u;
label_2d3f00:
    // 0x2d3f00: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D3F00u;
    {
        const bool branch_taken_0x2d3f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f00) {
            ctx->pc = 0x2D3F68u;
            goto label_2d3f68;
        }
    }
    ctx->pc = 0x2D3F08u;
    // 0x2d3f08: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2d3f08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d3f0c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2d3f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d3f10: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3F10u;
    {
        const bool branch_taken_0x2d3f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D3F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3F10u;
            // 0x2d3f14: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f10) {
            ctx->pc = 0x2D3F2Cu;
            goto label_2d3f2c;
        }
    }
    ctx->pc = 0x2D3F18u;
    // 0x2d3f18: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2d3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d3f1c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D3F1Cu;
    {
        const bool branch_taken_0x2d3f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3F1Cu;
            // 0x2d3f20: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f1c) {
            ctx->pc = 0x2D3F68u;
            goto label_2d3f68;
        }
    }
    ctx->pc = 0x2D3F24u;
    // 0x2d3f24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D3F24u;
    {
        const bool branch_taken_0x2d3f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3F24u;
            // 0x2d3f28: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f24) {
            ctx->pc = 0x2D3F68u;
            goto label_2d3f68;
        }
    }
    ctx->pc = 0x2D3F2Cu;
label_2d3f2c:
    // 0x2d3f2c: 0x0  nop
    ctx->pc = 0x2d3f2cu;
    // NOP
    // 0x2d3f30: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d3f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d3f34: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3F34u;
    {
        const bool branch_taken_0x2d3f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D3F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3F34u;
            // 0x2d3f38: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f34) {
            ctx->pc = 0x2D3F54u;
            goto label_2d3f54;
        }
    }
    ctx->pc = 0x2D3F3Cu;
    // 0x2d3f3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d3f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3f40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3F40u;
    {
        const bool branch_taken_0x2d3f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f40) {
            ctx->pc = 0x2D3F54u;
            goto label_2d3f54;
        }
    }
    ctx->pc = 0x2D3F48u;
    // 0x2d3f48: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d3f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d3f4c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d3f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d3f50: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d3f50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d3f54:
    // 0x2d3f54: 0x0  nop
    ctx->pc = 0x2d3f54u;
    // NOP
    // 0x2d3f58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d3f58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d3f5c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2d3f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d3f60: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2D3F60u;
    {
        const bool branch_taken_0x2d3f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f60) {
            ctx->pc = 0x2D3EC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d3ec8;
        }
    }
    ctx->pc = 0x2D3F68u;
label_2d3f68:
    // 0x2d3f68: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x2d3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x2d3f6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3f70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3F70u;
    {
        const bool branch_taken_0x2d3f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f70) {
            ctx->pc = 0x2D3F84u;
            goto label_2d3f84;
        }
    }
    ctx->pc = 0x2D3F78u;
    // 0x2d3f78: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d3f7c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2d3f7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2d3f80: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2d3f80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2d3f84:
    // 0x2d3f84: 0x0  nop
    ctx->pc = 0x2d3f84u;
    // NOP
    // 0x2d3f88: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2d3f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d3f8c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x2D3F8Cu;
    {
        const bool branch_taken_0x2d3f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3F8Cu;
            // 0x2d3f90: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f8c) {
            ctx->pc = 0x2D3E68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d3e68;
        }
    }
    ctx->pc = 0x2D3F94u;
label_2d3f94:
    // 0x2d3f94: 0x0  nop
    ctx->pc = 0x2d3f94u;
    // NOP
    // 0x2d3f98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d3f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f9c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d3f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d3fa0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d3fa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d3fa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d3fa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3fa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d3fa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3fac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d3facu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3fb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d3fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3FB8u;
            // 0x2d3fbc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3FC0u;
}
