#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgLoopSubGame2__Fv
// Address: 0x3041d0 - 0x30423c
void sgLoopSubGame2__Fv_0x3041d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgLoopSubGame2__Fv_0x3041d0");
#endif

    switch (ctx->pc) {
        case 0x3041e0u: goto label_3041e0;
        case 0x30422cu: goto label_30422c;
        default: break;
    }

    ctx->pc = 0x3041d0u;

    // 0x3041d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3041d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3041d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3041d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3041d8: 0xc0c0fc8  jal         func_303F20
    ctx->pc = 0x3041D8u;
    SET_GPR_U32(ctx, 31, 0x3041E0u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3041E0u; }
        if (ctx->pc != 0x3041E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3041E0u; }
        if (ctx->pc != 0x3041E0u) { return; }
    }
    ctx->pc = 0x3041E0u;
label_3041e0:
    // 0x3041e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3041E0u;
    {
        const bool branch_taken_0x3041e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3041E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3041E0u;
            // 0x3041e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3041e0) {
            ctx->pc = 0x3041F0u;
            goto label_3041f0;
        }
    }
    ctx->pc = 0x3041E8u;
    // 0x3041e8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3041E8u;
    {
        const bool branch_taken_0x3041e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3041ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3041E8u;
            // 0x3041ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3041e8) {
            ctx->pc = 0x304234u;
            goto label_304234;
        }
    }
    ctx->pc = 0x3041F0u;
label_3041f0:
    // 0x3041f0: 0x8f83a104  lw          $v1, -0x5EFC($gp)
    ctx->pc = 0x3041f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x3041f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3041f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3041f8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3041F8u;
    {
        const bool branch_taken_0x3041f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3041FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3041F8u;
            // 0x3041fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3041f8) {
            ctx->pc = 0x304230u;
            goto label_304230;
        }
    }
    ctx->pc = 0x304200u;
    // 0x304200: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x304200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x304204: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x304204u;
    {
        const bool branch_taken_0x304204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304204u;
            // 0x304208: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304204) {
            ctx->pc = 0x30422Cu;
            goto label_30422c;
        }
    }
    ctx->pc = 0x30420Cu;
    // 0x30420c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30420Cu;
    {
        const bool branch_taken_0x30420c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30420Cu;
            // 0x304210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30420c) {
            ctx->pc = 0x30422Cu;
            goto label_30422c;
        }
    }
    ctx->pc = 0x304214u;
    // 0x304214: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304214u;
    {
        const bool branch_taken_0x304214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304214u;
            // 0x304218: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304214) {
            ctx->pc = 0x304224u;
            goto label_304224;
        }
    }
    ctx->pc = 0x30421Cu;
    // 0x30421c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30421Cu;
    {
        const bool branch_taken_0x30421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30421c) {
            ctx->pc = 0x30422Cu;
            goto label_30422c;
        }
    }
    ctx->pc = 0x304224u;
label_304224:
    // 0x304224: 0xc0bf814  jal         func_2FE050
    ctx->pc = 0x304224u;
    SET_GPR_U32(ctx, 31, 0x30422Cu);
    ctx->pc = 0x304228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304224u;
            // 0x304228: 0x24849e30  addiu       $a0, $a0, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE050u;
    if (runtime->hasFunction(0x2FE050u)) {
        auto targetFn = runtime->lookupFunction(0x2FE050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30422Cu; }
        if (ctx->pc != 0x30422Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgLoopFishing2__FP11SubGameInfo_0x2fe050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30422Cu; }
        if (ctx->pc != 0x30422Cu) { return; }
    }
    ctx->pc = 0x30422Cu;
label_30422c:
    // 0x30422c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30422cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304230:
    // 0x304230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304234:
    // 0x304234: 0x3e00008  jr          $ra
    ctx->pc = 0x304234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304234u;
            // 0x304238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30423Cu;
}
