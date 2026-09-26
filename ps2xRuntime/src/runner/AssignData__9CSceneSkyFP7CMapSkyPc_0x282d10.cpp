#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignData__9CSceneSkyFP7CMapSkyPc
// Address: 0x282d10 - 0x282d8c
void AssignData__9CSceneSkyFP7CMapSkyPc_0x282d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignData__9CSceneSkyFP7CMapSkyPc_0x282d10");
#endif

    switch (ctx->pc) {
        case 0x282d44u: goto label_282d44;
        case 0x282d64u: goto label_282d64;
        default: break;
    }

    ctx->pc = 0x282d10u;

    // 0x282d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282d14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x282d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x282d18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x282d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x282d1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282d20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x282d20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282d28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x282d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d2c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282D2Cu;
    {
        const bool branch_taken_0x282d2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x282D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282D2Cu;
            // 0x282d30: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d2c) {
            ctx->pc = 0x282D3Cu;
            goto label_282d3c;
        }
    }
    ctx->pc = 0x282D34u;
    // 0x282d34: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x282D34u;
    {
        const bool branch_taken_0x282d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282D34u;
            // 0x282d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d34) {
            ctx->pc = 0x282D74u;
            goto label_282d74;
        }
    }
    ctx->pc = 0x282D3Cu;
label_282d3c:
    // 0x282d3c: 0xc0a0b64  jal         func_282D90
    ctx->pc = 0x282D3Cu;
    SET_GPR_U32(ctx, 31, 0x282D44u);
    ctx->pc = 0x282D90u;
    if (runtime->hasFunction(0x282D90u)) {
        auto targetFn = runtime->lookupFunction(0x282D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D44u; }
        if (ctx->pc != 0x282D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CSceneSkyFv_0x282d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D44u; }
        if (ctx->pc != 0x282D44u) { return; }
    }
    ctx->pc = 0x282D44u;
label_282d44:
    // 0x282d44: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x282d44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x282d48: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282D48u;
    {
        const bool branch_taken_0x282d48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x282D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282D48u;
            // 0x282d4c: 0xae510034  sw          $s1, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d48) {
            ctx->pc = 0x282D58u;
            goto label_282d58;
        }
    }
    ctx->pc = 0x282D50u;
    // 0x282d50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x282D50u;
    {
        const bool branch_taken_0x282d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282D50u;
            // 0x282d54: 0xa2400008  sb          $zero, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d50) {
            ctx->pc = 0x282D64u;
            goto label_282d64;
        }
    }
    ctx->pc = 0x282D58u;
label_282d58:
    // 0x282d58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d5c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x282D5Cu;
    SET_GPR_U32(ctx, 31, 0x282D64u);
    ctx->pc = 0x282D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282D5Cu;
            // 0x282d60: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D64u; }
        if (ctx->pc != 0x282D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D64u; }
        if (ctx->pc != 0x282D64u) { return; }
    }
    ctx->pc = 0x282D64u;
label_282d64:
    // 0x282d64: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x282d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x282d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282d6c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x282d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x282d70: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x282d70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_282d74:
    // 0x282d74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x282d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282d78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x282d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282d7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282d7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282d84: 0x3e00008  jr          $ra
    ctx->pc = 0x282D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282D84u;
            // 0x282d88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282D8Cu;
}
