#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignData__13CSceneMessageFP6ClsMesPc
// Address: 0x282c00 - 0x282c7c
void AssignData__13CSceneMessageFP6ClsMesPc_0x282c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignData__13CSceneMessageFP6ClsMesPc_0x282c00");
#endif

    switch (ctx->pc) {
        case 0x282c34u: goto label_282c34;
        case 0x282c54u: goto label_282c54;
        default: break;
    }

    ctx->pc = 0x282c00u;

    // 0x282c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282c04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x282c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x282c08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x282c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x282c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282c10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x282c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282c18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x282c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c1c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282C1Cu;
    {
        const bool branch_taken_0x282c1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x282C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C1Cu;
            // 0x282c20: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c1c) {
            ctx->pc = 0x282C2Cu;
            goto label_282c2c;
        }
    }
    ctx->pc = 0x282C24u;
    // 0x282c24: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x282C24u;
    {
        const bool branch_taken_0x282c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C24u;
            // 0x282c28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c24) {
            ctx->pc = 0x282C64u;
            goto label_282c64;
        }
    }
    ctx->pc = 0x282C2Cu;
label_282c2c:
    // 0x282c2c: 0xc0a0afc  jal         func_282BF0
    ctx->pc = 0x282C2Cu;
    SET_GPR_U32(ctx, 31, 0x282C34u);
    ctx->pc = 0x282BF0u;
    if (runtime->hasFunction(0x282BF0u)) {
        auto targetFn = runtime->lookupFunction(0x282BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C34u; }
        if (ctx->pc != 0x282C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CSceneMessageFv_0x282bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C34u; }
        if (ctx->pc != 0x282C34u) { return; }
    }
    ctx->pc = 0x282C34u;
label_282c34:
    // 0x282c34: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x282c34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x282c38: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282C38u;
    {
        const bool branch_taken_0x282c38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x282C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C38u;
            // 0x282c3c: 0xae510034  sw          $s1, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c38) {
            ctx->pc = 0x282C48u;
            goto label_282c48;
        }
    }
    ctx->pc = 0x282C40u;
    // 0x282c40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x282C40u;
    {
        const bool branch_taken_0x282c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C40u;
            // 0x282c44: 0xa2400008  sb          $zero, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282c40) {
            ctx->pc = 0x282C54u;
            goto label_282c54;
        }
    }
    ctx->pc = 0x282C48u;
label_282c48:
    // 0x282c48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c4c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x282C4Cu;
    SET_GPR_U32(ctx, 31, 0x282C54u);
    ctx->pc = 0x282C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282C4Cu;
            // 0x282c50: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C54u; }
        if (ctx->pc != 0x282C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282C54u; }
        if (ctx->pc != 0x282C54u) { return; }
    }
    ctx->pc = 0x282C54u;
label_282c54:
    // 0x282c54: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x282c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x282c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282c5c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x282c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x282c60: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x282c60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_282c64:
    // 0x282c64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x282c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282c68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x282c68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282c6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282c70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282c74: 0x3e00008  jr          $ra
    ctx->pc = 0x282C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282C74u;
            // 0x282c78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282C7Cu;
}
