#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPalletColor__13CGameDataUsedFv
// Address: 0x197200 - 0x197250
void GetPalletColor__13CGameDataUsedFv_0x197200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPalletColor__13CGameDataUsedFv_0x197200");
#endif

    switch (ctx->pc) {
        case 0x197230u: goto label_197230;
        default: break;
    }

    ctx->pc = 0x197200u;

    // 0x197200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x197204: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19720c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x19720cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197210: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197210u;
    {
        const bool branch_taken_0x197210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x197210) {
            ctx->pc = 0x197220u;
            goto label_197220;
        }
    }
    ctx->pc = 0x197218u;
    // 0x197218: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x197218u;
    {
        const bool branch_taken_0x197218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19721Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197218u;
            // 0x19721c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197218) {
            ctx->pc = 0x197244u;
            goto label_197244;
        }
    }
    ctx->pc = 0x197220u;
label_197220:
    // 0x197220: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x197220u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x197224: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x197224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x197228: 0xc0655f8  jal         func_1957E0
    ctx->pc = 0x197228u;
    SET_GPR_U32(ctx, 31, 0x197230u);
    ctx->pc = 0x19722Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197228u;
            // 0x19722c: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1957E0u;
    if (runtime->hasFunction(0x1957E0u)) {
        auto targetFn = runtime->lookupFunction(0x1957E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197230u; }
        if (ctx->pc != 0x197230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponData__9CGameDataFi_0x1957e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197230u; }
        if (ctx->pc != 0x197230u) { return; }
    }
    ctx->pc = 0x197230u;
label_197230:
    // 0x197230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197230u;
    {
        const bool branch_taken_0x197230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197230) {
            ctx->pc = 0x197240u;
            goto label_197240;
        }
    }
    ctx->pc = 0x197238u;
    // 0x197238: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197238u;
    {
        const bool branch_taken_0x197238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197238u;
            // 0x19723c: 0x80420046  lb          $v0, 0x46($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 70)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197238) {
            ctx->pc = 0x197244u;
            goto label_197244;
        }
    }
    ctx->pc = 0x197240u;
label_197240:
    // 0x197240: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197244:
    // 0x197244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197248: 0x3e00008  jr          $ra
    ctx->pc = 0x197248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19724Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197248u;
            // 0x19724c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197250u;
}
