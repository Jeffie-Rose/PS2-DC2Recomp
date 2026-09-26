#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMapFromMemory__6CSceneFiP17SCN_LOADMAP_INFO2
// Address: 0x285670 - 0x2856f0
void LoadMapFromMemory__6CSceneFiP17SCN_LOADMAP_INFO2_0x285670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMapFromMemory__6CSceneFiP17SCN_LOADMAP_INFO2_0x285670");
#endif

    switch (ctx->pc) {
        case 0x28569cu: goto label_28569c;
        case 0x2856acu: goto label_2856ac;
        default: break;
    }

    ctx->pc = 0x285670u;

    // 0x285670: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x285670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x285674: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x285674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x285678: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x285678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28567c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x285680: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x285680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285684: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x285684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x285688: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x285688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28568c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28568cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x285690: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x285690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285694: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x285694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285698: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x285698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28569c:
    // 0x28569c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28569cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2856a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2856a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2856a4: 0xc0a15bc  jal         func_2856F0
    ctx->pc = 0x2856A4u;
    SET_GPR_U32(ctx, 31, 0x2856ACu);
    ctx->pc = 0x2856A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2856A4u;
            // 0x2856a8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2856F0u;
    if (runtime->hasFunction(0x2856F0u)) {
        auto targetFn = runtime->lookupFunction(0x2856F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2856ACu; }
        if (ctx->pc != 0x2856ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapFromMemory__6CSceneFiiP17SCN_LOADMAP_INFO2_0x2856f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2856ACu; }
        if (ctx->pc != 0x2856ACu) { return; }
    }
    ctx->pc = 0x2856ACu;
label_2856ac:
    // 0x2856ac: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2856ACu;
    {
        const bool branch_taken_0x2856ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2856ac) {
            ctx->pc = 0x2856BCu;
            goto label_2856bc;
        }
    }
    ctx->pc = 0x2856B4u;
    // 0x2856b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2856B4u;
    {
        const bool branch_taken_0x2856b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2856B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2856B4u;
            // 0x2856b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856b4) {
            ctx->pc = 0x2856D4u;
            goto label_2856d4;
        }
    }
    ctx->pc = 0x2856BCu;
label_2856bc:
    // 0x2856bc: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2856BCu;
    {
        const bool branch_taken_0x2856bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2856C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2856BCu;
            // 0x2856c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856bc) {
            ctx->pc = 0x2856CCu;
            goto label_2856cc;
        }
    }
    ctx->pc = 0x2856C4u;
    // 0x2856c4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x2856C4u;
    {
        const bool branch_taken_0x2856c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2856C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2856C4u;
            // 0x2856c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2856c4) {
            ctx->pc = 0x28569Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28569c;
        }
    }
    ctx->pc = 0x2856CCu;
label_2856cc:
    // 0x2856cc: 0x0  nop
    ctx->pc = 0x2856ccu;
    // NOP
    // 0x2856d0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2856d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2856d4:
    // 0x2856d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2856d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2856d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2856d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2856dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2856dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2856e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2856e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2856e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2856e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2856e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2856E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2856ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2856E8u;
            // 0x2856ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2856F0u;
}
