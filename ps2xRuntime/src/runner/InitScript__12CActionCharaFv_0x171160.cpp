#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitScript__12CActionCharaFv
// Address: 0x171160 - 0x1711b4
void InitScript__12CActionCharaFv_0x171160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitScript__12CActionCharaFv_0x171160");
#endif

    switch (ctx->pc) {
        case 0x171174u: goto label_171174;
        case 0x171188u: goto label_171188;
        case 0x17119cu: goto label_17119c;
        default: break;
    }

    ctx->pc = 0x171160u;

    // 0x171160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17116c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x17116Cu;
    SET_GPR_U32(ctx, 31, 0x171174u);
    ctx->pc = 0x171170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17116Cu;
            // 0x171170: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171174u; }
        if (ctx->pc != 0x171174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetScript__12CActionCharaFv_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171174u; }
        if (ctx->pc != 0x171174u) { return; }
    }
    ctx->pc = 0x171174u;
label_171174:
    // 0x171174: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x171174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x171178: 0x260406bc  addiu       $a0, $s0, 0x6BC
    ctx->pc = 0x171178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1724));
    // 0x17117c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x17117cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x171180: 0xc061cd8  jal         func_187360
    ctx->pc = 0x171180u;
    SET_GPR_U32(ctx, 31, 0x171188u);
    ctx->pc = 0x171184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171180u;
            // 0x171184: 0xac30d430  sw          $s0, -0x2BD0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956080), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187360u;
    if (runtime->hasFunction(0x187360u)) {
        auto targetFn = runtime->lookupFunction(0x187360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171188u; }
        if (ctx->pc != 0x171188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_program__10CRunScriptFi_0x187360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171188u; }
        if (ctx->pc != 0x171188u) { return; }
    }
    ctx->pc = 0x171188u;
label_171188:
    // 0x171188: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171188u;
    {
        const bool branch_taken_0x171188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17118Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171188u;
            // 0x17118c: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171188) {
            ctx->pc = 0x1711A0u;
            goto label_1711a0;
        }
    }
    ctx->pc = 0x171190u;
    // 0x171190: 0x260406bc  addiu       $a0, $s0, 0x6BC
    ctx->pc = 0x171190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1724));
    // 0x171194: 0xc061c84  jal         func_187210
    ctx->pc = 0x171194u;
    SET_GPR_U32(ctx, 31, 0x17119Cu);
    ctx->pc = 0x171198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171194u;
            // 0x171198: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187210u;
    if (runtime->hasFunction(0x187210u)) {
        auto targetFn = runtime->lookupFunction(0x187210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17119Cu; }
        if (ctx->pc != 0x17119Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        run__10CRunScriptFi_0x187210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17119Cu; }
        if (ctx->pc != 0x17119Cu) { return; }
    }
    ctx->pc = 0x17119Cu;
label_17119c:
    // 0x17119c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x17119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1711a0:
    // 0x1711a0: 0xa6030710  sh          $v1, 0x710($s0)
    ctx->pc = 0x1711a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1808), (uint16_t)GPR_U32(ctx, 3));
    // 0x1711a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1711a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1711a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1711a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1711ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1711ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1711B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1711ACu;
            // 0x1711b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1711B4u;
}
