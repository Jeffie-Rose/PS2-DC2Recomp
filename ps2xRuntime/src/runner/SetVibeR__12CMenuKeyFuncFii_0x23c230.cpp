#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetVibeR__12CMenuKeyFuncFii
// Address: 0x23c230 - 0x23c2c0
void SetVibeR__12CMenuKeyFuncFii_0x23c230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVibeR__12CMenuKeyFuncFii_0x23c230");
#endif

    switch (ctx->pc) {
        case 0x23c268u: goto label_23c268;
        case 0x23c280u: goto label_23c280;
        default: break;
    }

    ctx->pc = 0x23c230u;

    // 0x23c230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23c230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23c234: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23c234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23c238: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23c238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23c23c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23c23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23c240: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23c240u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c244: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23c244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23c248: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23c248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c24c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23c24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23c250: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23c250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23c254: 0x8c830138  lw          $v1, 0x138($a0)
    ctx->pc = 0x23c254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x23c258: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x23C258u;
    {
        const bool branch_taken_0x23c258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C258u;
            // 0x23c25c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c258) {
            ctx->pc = 0x23C2A0u;
            goto label_23c2a0;
        }
    }
    ctx->pc = 0x23C260u;
    // 0x23c260: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23c260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c264: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23c264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c268:
    // 0x23c268: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23c268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23c26c: 0x24420c40  addiu       $v0, $v0, 0xC40
    ctx->pc = 0x23c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3136));
    // 0x23c270: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23c270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23c274: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23c274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c278: 0xc089664  jal         func_225990
    ctx->pc = 0x23C278u;
    SET_GPR_U32(ctx, 31, 0x23C280u);
    ctx->pc = 0x23C27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C278u;
            // 0x23c27c: 0x8e840138  lw          $a0, 0x138($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C280u; }
        if (ctx->pc != 0x23C280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C280u; }
        if (ctx->pc != 0x23C280u) { return; }
    }
    ctx->pc = 0x23C280u;
label_23c280:
    // 0x23c280: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23C280u;
    {
        const bool branch_taken_0x23c280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c280) {
            ctx->pc = 0x23C2A0u;
            goto label_23c2a0;
        }
    }
    ctx->pc = 0x23C288u;
    // 0x23c288: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23c288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23c28c: 0xa053000b  sb          $s3, 0xB($v0)
    ctx->pc = 0x23c28cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 19));
    // 0x23c290: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x23c290u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23c294: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x23c294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x23c298: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x23C298u;
    {
        const bool branch_taken_0x23c298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C298u;
            // 0x23c29c: 0xa052000c  sb          $s2, 0xC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c298) {
            ctx->pc = 0x23C268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23c268;
        }
    }
    ctx->pc = 0x23C2A0u;
label_23c2a0:
    // 0x23c2a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23c2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23c2a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23c2a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23c2a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23c2a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c2ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23c2acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c2b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23c2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c2b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23c2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x23C2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C2B8u;
            // 0x23c2bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C2C0u;
}
