#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__17CList<9CMapParts>Fv
// Address: 0x161d40 - 0x161d88
void ps2___ct__17CList_9CMapParts_Fv_0x161d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__17CList_9CMapParts_Fv_0x161d40");
#endif

    switch (ctx->pc) {
        case 0x161d40u: goto label_161d40;
        case 0x161d44u: goto label_161d44;
        case 0x161d48u: goto label_161d48;
        case 0x161d4cu: goto label_161d4c;
        case 0x161d50u: goto label_161d50;
        case 0x161d54u: goto label_161d54;
        case 0x161d58u: goto label_161d58;
        case 0x161d5cu: goto label_161d5c;
        case 0x161d60u: goto label_161d60;
        case 0x161d64u: goto label_161d64;
        case 0x161d68u: goto label_161d68;
        case 0x161d6cu: goto label_161d6c;
        case 0x161d70u: goto label_161d70;
        case 0x161d74u: goto label_161d74;
        case 0x161d78u: goto label_161d78;
        case 0x161d7cu: goto label_161d7c;
        case 0x161d80u: goto label_161d80;
        case 0x161d84u: goto label_161d84;
        default: break;
    }

    ctx->pc = 0x161d40u;

label_161d40:
    // 0x161d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_161d44:
    // 0x161d44: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x161d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_161d48:
    // 0x161d48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_161d4c:
    // 0x161d4c: 0x244253a8  addiu       $v0, $v0, 0x53A8
    ctx->pc = 0x161d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21416));
label_161d50:
    // 0x161d50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_161d54:
    // 0x161d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161d58:
    // 0x161d58: 0xac820320  sw          $v0, 0x320($a0)
    ctx->pc = 0x161d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 2));
label_161d5c:
    // 0x161d5c: 0xc0572cc  jal         func_15CB30
label_161d60:
    if (ctx->pc == 0x161D60u) {
        ctx->pc = 0x161D60u;
            // 0x161d60: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x161D64u;
        goto label_161d64;
    }
    ctx->pc = 0x161D5Cu;
    SET_GPR_U32(ctx, 31, 0x161D64u);
    ctx->pc = 0x161D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D5Cu;
            // 0x161d60: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CB30u;
    if (runtime->hasFunction(0x15CB30u)) {
        auto targetFn = runtime->lookupFunction(0x15CB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D64u; }
        if (ctx->pc != 0x161D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMapPartsFv_0x15cb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D64u; }
        if (ctx->pc != 0x161D64u) { return; }
    }
    ctx->pc = 0x161D64u;
label_161d64:
    // 0x161d64: 0x8e190320  lw          $t9, 0x320($s0)
    ctx->pc = 0x161d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
label_161d68:
    // 0x161d68: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x161d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_161d6c:
    // 0x161d6c: 0x320f809  jalr        $t9
label_161d70:
    if (ctx->pc == 0x161D70u) {
        ctx->pc = 0x161D70u;
            // 0x161d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161D74u;
        goto label_161d74;
    }
    ctx->pc = 0x161D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x161D74u);
        ctx->pc = 0x161D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161D6Cu;
            // 0x161d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161D74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161D74u; }
            if (ctx->pc != 0x161D74u) { return; }
        }
        }
    }
    ctx->pc = 0x161D74u;
label_161d74:
    // 0x161d74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x161d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161d78:
    // 0x161d78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_161d7c:
    // 0x161d7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_161d80:
    // 0x161d80: 0x3e00008  jr          $ra
label_161d84:
    if (ctx->pc == 0x161D84u) {
        ctx->pc = 0x161D84u;
            // 0x161d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x161D88u;
        goto label_fallthrough_0x161d80;
    }
    ctx->pc = 0x161D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161D80u;
            // 0x161d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x161d80:
    ctx->pc = 0x161D88u;
}
