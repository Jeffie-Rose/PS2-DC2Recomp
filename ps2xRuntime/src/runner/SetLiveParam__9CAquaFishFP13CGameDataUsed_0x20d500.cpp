#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetLiveParam__9CAquaFishFP13CGameDataUsed
// Address: 0x20d500 - 0x20d57c
void SetLiveParam__9CAquaFishFP13CGameDataUsed_0x20d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetLiveParam__9CAquaFishFP13CGameDataUsed_0x20d500");
#endif

    switch (ctx->pc) {
        case 0x20d54cu: goto label_20d54c;
        default: break;
    }

    ctx->pc = 0x20d500u;

    // 0x20d500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20d500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20d504: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x20d504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x20d508: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20d508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20d50c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x20d50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x20d510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20d514: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d518: 0xac850938  sw          $a1, 0x938($a0)
    ctx->pc = 0x20d518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2360), GPR_U32(ctx, 5));
    // 0x20d51c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20d51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d520: 0x8c830938  lw          $v1, 0x938($a0)
    ctx->pc = 0x20d520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2360)));
    // 0x20d524: 0x9463003c  lhu         $v1, 0x3C($v1)
    ctx->pc = 0x20d524u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x20d528: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x20d528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20d52c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x20d52cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20d530: 0x0  nop
    ctx->pc = 0x20d530u;
    // NOP
    // 0x20d534: 0x0  nop
    ctx->pc = 0x20d534u;
    // NOP
    // 0x20d538: 0x1010  mfhi        $v0
    ctx->pc = 0x20d538u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x20d53c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x20d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x20d540: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x20d540u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x20d544: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x20D544u;
    SET_GPR_U32(ctx, 31, 0x20D54Cu);
    ctx->pc = 0x20D548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D544u;
            // 0x20d548: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D54Cu; }
        if (ctx->pc != 0x20D54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D54Cu; }
        if (ctx->pc != 0x20D54Cu) { return; }
    }
    ctx->pc = 0x20D54Cu;
label_20d54c:
    // 0x20d54c: 0x2443001a  addiu       $v1, $v0, 0x1A
    ctx->pc = 0x20d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 26));
    // 0x20d550: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x20d550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x20d554: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20d554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20d558: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20d55c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d560: 0xae030930  sw          $v1, 0x930($s0)
    ctx->pc = 0x20d560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2352), GPR_U32(ctx, 3));
    // 0x20d564: 0xae00092c  sw          $zero, 0x92C($s0)
    ctx->pc = 0x20d564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2348), GPR_U32(ctx, 0));
    // 0x20d568: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20d568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d56c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d574: 0x3e00008  jr          $ra
    ctx->pc = 0x20D574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D574u;
            // 0x20d578: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D57Cu;
}
