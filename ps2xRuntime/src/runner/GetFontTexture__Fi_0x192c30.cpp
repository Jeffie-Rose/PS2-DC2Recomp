#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFontTexture__Fi
// Address: 0x192c30 - 0x192c98
void GetFontTexture__Fi_0x192c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFontTexture__Fi_0x192c30");
#endif

    switch (ctx->pc) {
        case 0x192c64u: goto label_192c64;
        default: break;
    }

    ctx->pc = 0x192c30u;

    // 0x192c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x192c34: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192C34u;
    {
        const bool branch_taken_0x192c34 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x192C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192C34u;
            // 0x192c38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c34) {
            ctx->pc = 0x192C48u;
            goto label_192c48;
        }
    }
    ctx->pc = 0x192C3Cu;
    // 0x192c3c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x192c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x192c40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192C40u;
    {
        const bool branch_taken_0x192c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192C40u;
            // 0x192c44: 0x28810002  slti        $at, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c40) {
            ctx->pc = 0x192C54u;
            goto label_192c54;
        }
    }
    ctx->pc = 0x192C48u;
label_192c48:
    // 0x192c48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x192C48u;
    {
        const bool branch_taken_0x192c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192C48u;
            // 0x192c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c48) {
            ctx->pc = 0x192C8Cu;
            goto label_192c8c;
        }
    }
    ctx->pc = 0x192C50u;
    // 0x192c50: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x192c50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_192c54:
    // 0x192c54: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x192C54u;
    {
        const bool branch_taken_0x192c54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x192C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192C54u;
            // 0x192c58: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c54) {
            ctx->pc = 0x192C70u;
            goto label_192c70;
        }
    }
    ctx->pc = 0x192C5Cu;
    // 0x192c5c: 0xc0515fc  jal         func_1457F0
    ctx->pc = 0x192C5Cu;
    SET_GPR_U32(ctx, 31, 0x192C64u);
    ctx->pc = 0x1457F0u;
    if (runtime->hasFunction(0x1457F0u)) {
        auto targetFn = runtime->lookupFunction(0x1457F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C64u; }
        if (ctx->pc != 0x192C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetTextureZ__Fi_0x1457f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C64u; }
        if (ctx->pc != 0x192C64u) { return; }
    }
    ctx->pc = 0x192C64u;
label_192c64:
    // 0x192c64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x192C64u;
    {
        const bool branch_taken_0x192c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192C64u;
            // 0x192c68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c64) {
            ctx->pc = 0x192C90u;
            goto label_192c90;
        }
    }
    ctx->pc = 0x192C6Cu;
    // 0x192c6c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x192c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_192c70:
    // 0x192c70: 0x3c0201e6  lui         $v0, 0x1E6
    ctx->pc = 0x192c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)486 << 16));
    // 0x192c74: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x192c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x192c78: 0x244272b0  addiu       $v0, $v0, 0x72B0
    ctx->pc = 0x192c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29360));
    // 0x192c7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x192c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x192c80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192c84: 0x80430008  lb          $v1, 0x8($v0)
    ctx->pc = 0x192c84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x192c88: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x192c88u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_192c8c:
    // 0x192c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_192c90:
    // 0x192c90: 0x3e00008  jr          $ra
    ctx->pc = 0x192C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192C90u;
            // 0x192c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192C98u;
}
