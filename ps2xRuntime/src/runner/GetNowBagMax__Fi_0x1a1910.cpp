#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowBagMax__Fi
// Address: 0x1a1910 - 0x1a1940
void GetNowBagMax__Fi_0x1a1910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowBagMax__Fi_0x1a1910");
#endif

    switch (ctx->pc) {
        case 0x1a1924u: goto label_1a1924;
        case 0x1a1930u: goto label_1a1930;
        default: break;
    }

    ctx->pc = 0x1a1910u;

    // 0x1a1910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a1918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a191c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A191Cu;
    SET_GPR_U32(ctx, 31, 0x1A1924u);
    ctx->pc = 0x1A1920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A191Cu;
            // 0x1a1920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1924u; }
        if (ctx->pc != 0x1A1924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1924u; }
        if (ctx->pc != 0x1A1924u) { return; }
    }
    ctx->pc = 0x1A1924u;
label_1a1924:
    // 0x1a1924: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a1924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1928: 0xc0670d4  jal         func_19C350
    ctx->pc = 0x1A1928u;
    SET_GPR_U32(ctx, 31, 0x1A1930u);
    ctx->pc = 0x1A192Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1928u;
            // 0x1a192c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C350u;
    if (runtime->hasFunction(0x19C350u)) {
        auto targetFn = runtime->lookupFunction(0x19C350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1930u; }
        if (ctx->pc != 0x1A1930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemBoardMaxNum__16CUserDataManagerFi_0x19c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1930u; }
        if (ctx->pc != 0x1A1930u) { return; }
    }
    ctx->pc = 0x1A1930u;
label_1a1930:
    // 0x1a1930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1938: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A193Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1938u;
            // 0x1a193c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1940u;
}
