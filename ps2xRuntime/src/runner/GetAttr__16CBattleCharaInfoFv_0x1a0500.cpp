#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAttr__16CBattleCharaInfoFv
// Address: 0x1a0500 - 0x1a0544
void GetAttr__16CBattleCharaInfoFv_0x1a0500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAttr__16CBattleCharaInfoFv_0x1a0500");
#endif

    switch (ctx->pc) {
        case 0x1a0514u: goto label_1a0514;
        case 0x1a0528u: goto label_1a0528;
        default: break;
    }

    ctx->pc = 0x1a0500u;

    // 0x1a0500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a050c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A050Cu;
    SET_GPR_U32(ctx, 31, 0x1A0514u);
    ctx->pc = 0x1A0510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A050Cu;
            // 0x1a0510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0514u; }
        if (ctx->pc != 0x1A0514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0514u; }
        if (ctx->pc != 0x1A0514u) { return; }
    }
    ctx->pc = 0x1A0514u;
label_1a0514:
    // 0x1a0514: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0514u;
    {
        const bool branch_taken_0x1a0514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0514) {
            ctx->pc = 0x1A0530u;
            goto label_1a0530;
        }
    }
    ctx->pc = 0x1A051Cu;
    // 0x1a051c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x1a051cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0520: 0xc0670b0  jal         func_19C2C0
    ctx->pc = 0x1A0520u;
    SET_GPR_U32(ctx, 31, 0x1A0528u);
    ctx->pc = 0x1A0524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0520u;
            // 0x1a0524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0528u; }
        if (ctx->pc != 0x1A0528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0528u; }
        if (ctx->pc != 0x1A0528u) { return; }
    }
    ctx->pc = 0x1A0528u;
label_1a0528:
    // 0x1a0528: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0528u;
    {
        const bool branch_taken_0x1a0528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A052Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0528u;
            // 0x1a052c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0528) {
            ctx->pc = 0x1A0538u;
            goto label_1a0538;
        }
    }
    ctx->pc = 0x1A0530u;
label_1a0530:
    // 0x1a0530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a0530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0534: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0538:
    // 0x1a0538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a053c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A053Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A053Cu;
            // 0x1a0540: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0544u;
}
