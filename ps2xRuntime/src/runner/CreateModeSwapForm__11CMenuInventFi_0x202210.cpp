#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateModeSwapForm__11CMenuInventFi
// Address: 0x202210 - 0x202248
void CreateModeSwapForm__11CMenuInventFi_0x202210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateModeSwapForm__11CMenuInventFi_0x202210");
#endif

    switch (ctx->pc) {
        case 0x202228u: goto label_202228;
        case 0x20223cu: goto label_20223c;
        default: break;
    }

    ctx->pc = 0x202210u;

    // 0x202210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x202210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202214: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x202214u;
    {
        const bool branch_taken_0x202214 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x202218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202214u;
            // 0x202218: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202214) {
            ctx->pc = 0x202230u;
            goto label_202230;
        }
    }
    ctx->pc = 0x20221Cu;
    // 0x20221c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20221cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x202220: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x202220u;
    SET_GPR_U32(ctx, 31, 0x202228u);
    ctx->pc = 0x202224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202220u;
            // 0x202224: 0x24a59380  addiu       $a1, $a1, -0x6C80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202228u; }
        if (ctx->pc != 0x202228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202228u; }
        if (ctx->pc != 0x202228u) { return; }
    }
    ctx->pc = 0x202228u;
label_202228:
    // 0x202228: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x202228u;
    {
        const bool branch_taken_0x202228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20222Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202228u;
            // 0x20222c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202228) {
            ctx->pc = 0x202240u;
            goto label_202240;
        }
    }
    ctx->pc = 0x202230u;
label_202230:
    // 0x202230: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x202234: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x202234u;
    SET_GPR_U32(ctx, 31, 0x20223Cu);
    ctx->pc = 0x202238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202234u;
            // 0x202238: 0x24a59390  addiu       $a1, $a1, -0x6C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20223Cu; }
        if (ctx->pc != 0x20223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20223Cu; }
        if (ctx->pc != 0x20223Cu) { return; }
    }
    ctx->pc = 0x20223Cu;
label_20223c:
    // 0x20223c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20223cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_202240:
    // 0x202240: 0x3e00008  jr          $ra
    ctx->pc = 0x202240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202240u;
            // 0x202244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202248u;
}
