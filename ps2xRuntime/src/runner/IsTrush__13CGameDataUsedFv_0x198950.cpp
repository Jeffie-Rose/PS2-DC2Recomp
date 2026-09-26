#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsTrush__13CGameDataUsedFv
// Address: 0x198950 - 0x1989c8
void IsTrush__13CGameDataUsedFv_0x198950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsTrush__13CGameDataUsedFv_0x198950");
#endif

    switch (ctx->pc) {
        case 0x198970u: goto label_198970;
        default: break;
    }

    ctx->pc = 0x198950u;

    // 0x198950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x198950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x198954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x198954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x198958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19895c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19895cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x198960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x198960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198964: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x198964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x198968: 0xc065708  jal         func_195C20
    ctx->pc = 0x198968u;
    SET_GPR_U32(ctx, 31, 0x198970u);
    ctx->pc = 0x19896Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198968u;
            // 0x19896c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198970u; }
        if (ctx->pc != 0x198970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198970u; }
        if (ctx->pc != 0x198970u) { return; }
    }
    ctx->pc = 0x198970u;
label_198970:
    // 0x198970: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198970u;
    {
        const bool branch_taken_0x198970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198970) {
            ctx->pc = 0x19898Cu;
            goto label_19898c;
        }
    }
    ctx->pc = 0x198978u;
    // 0x198978: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x198978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x19897c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x198980: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x198980u;
    {
        const bool branch_taken_0x198980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198980) {
            ctx->pc = 0x19898Cu;
            goto label_19898c;
        }
    }
    ctx->pc = 0x198988u;
    // 0x198988: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x198988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19898c:
    // 0x19898c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x19898cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x198990: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x198990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198994: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x198994u;
    {
        const bool branch_taken_0x198994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x198998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198994u;
            // 0x198998: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198994) {
            ctx->pc = 0x1989B4u;
            goto label_1989b4;
        }
    }
    ctx->pc = 0x19899Cu;
    // 0x19899c: 0x96220048  lhu         $v0, 0x48($s1)
    ctx->pc = 0x19899cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1989a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1989a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1989a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1989A4u;
    {
        const bool branch_taken_0x1989a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1989a4) {
            ctx->pc = 0x1989B0u;
            goto label_1989b0;
        }
    }
    ctx->pc = 0x1989ACu;
    // 0x1989ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1989acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1989b0:
    // 0x1989b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1989b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1989b4:
    // 0x1989b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1989b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1989b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1989b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1989bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1989bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1989c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1989C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1989C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1989C0u;
            // 0x1989c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1989C8u;
}
