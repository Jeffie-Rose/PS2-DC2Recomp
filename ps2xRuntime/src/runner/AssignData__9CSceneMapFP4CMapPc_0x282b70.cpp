#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignData__9CSceneMapFP4CMapPc
// Address: 0x282b70 - 0x282be8
void AssignData__9CSceneMapFP4CMapPc_0x282b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignData__9CSceneMapFP4CMapPc_0x282b70");
#endif

    switch (ctx->pc) {
        case 0x282bacu: goto label_282bac;
        case 0x282bc0u: goto label_282bc0;
        default: break;
    }

    ctx->pc = 0x282b70u;

    // 0x282b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282b74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x282b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x282b78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x282b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x282b7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282b80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x282b80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282b88: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x282b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282b8c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282B8Cu;
    {
        const bool branch_taken_0x282b8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B8Cu;
            // 0x282b90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b8c) {
            ctx->pc = 0x282B9Cu;
            goto label_282b9c;
        }
    }
    ctx->pc = 0x282B94u;
    // 0x282b94: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282B94u;
    {
        const bool branch_taken_0x282b94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x282b94) {
            ctx->pc = 0x282BA4u;
            goto label_282ba4;
        }
    }
    ctx->pc = 0x282B9Cu;
label_282b9c:
    // 0x282b9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x282B9Cu;
    {
        const bool branch_taken_0x282b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B9Cu;
            // 0x282ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282b9c) {
            ctx->pc = 0x282BD0u;
            goto label_282bd0;
        }
    }
    ctx->pc = 0x282BA4u;
label_282ba4:
    // 0x282ba4: 0xc0a0ad8  jal         func_282B60
    ctx->pc = 0x282BA4u;
    SET_GPR_U32(ctx, 31, 0x282BACu);
    ctx->pc = 0x282B60u;
    if (runtime->hasFunction(0x282B60u)) {
        auto targetFn = runtime->lookupFunction(0x282B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BACu; }
        if (ctx->pc != 0x282BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CSceneMapFv_0x282b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BACu; }
        if (ctx->pc != 0x282BACu) { return; }
    }
    ctx->pc = 0x282BACu;
label_282bac:
    // 0x282bac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x282bacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x282bb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282bb4: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x282bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x282bb8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x282BB8u;
    SET_GPR_U32(ctx, 31, 0x282BC0u);
    ctx->pc = 0x282BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282BB8u;
            // 0x282bbc: 0xae510034  sw          $s1, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BC0u; }
        if (ctx->pc != 0x282BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282BC0u; }
        if (ctx->pc != 0x282BC0u) { return; }
    }
    ctx->pc = 0x282BC0u;
label_282bc0:
    // 0x282bc0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x282bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x282bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282bc8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x282bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x282bcc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x282bccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_282bd0:
    // 0x282bd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x282bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282bd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x282bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282be0: 0x3e00008  jr          $ra
    ctx->pc = 0x282BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282BE0u;
            // 0x282be4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282BE8u;
}
