#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SYNC_GEOSTONE__FP12RS_STACKDATAi
// Address: 0x2755f0 - 0x27562c
void ps2__EOH_SYNC_GEOSTONE__FP12RS_STACKDATAi_0x2755f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SYNC_GEOSTONE__FP12RS_STACKDATAi_0x2755f0");
#endif

    switch (ctx->pc) {
        case 0x275600u: goto label_275600;
        case 0x275620u: goto label_275620;
        default: break;
    }

    ctx->pc = 0x2755f0u;

    // 0x2755f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2755f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2755f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2755f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2755f8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2755F8u;
    SET_GPR_U32(ctx, 31, 0x275600u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275600u; }
        if (ctx->pc != 0x275600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275600u; }
        if (ctx->pc != 0x275600u) { return; }
    }
    ctx->pc = 0x275600u;
label_275600:
    // 0x275600: 0x3c0801ea  lui         $t0, 0x1EA
    ctx->pc = 0x275600u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)490 << 16));
    // 0x275604: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x275608: 0x250851c0  addiu       $t0, $t0, 0x51C0
    ctx->pc = 0x275608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20928));
    // 0x27560c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x27560cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x275610: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x275610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x275614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275618: 0xc0976a0  jal         func_25DA80
    ctx->pc = 0x275618u;
    SET_GPR_U32(ctx, 31, 0x275620u);
    ctx->pc = 0x27561Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275618u;
            // 0x27561c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DA80u;
    if (runtime->hasFunction(0x25DA80u)) {
        auto targetFn = runtime->lookupFunction(0x25DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275620u; }
        if (ctx->pc != 0x275620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__10CEohMotherFiiiP11CCharacter2_0x25da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275620u; }
        if (ctx->pc != 0x275620u) { return; }
    }
    ctx->pc = 0x275620u;
label_275620:
    // 0x275620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275624: 0x3e00008  jr          $ra
    ctx->pc = 0x275624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275624u;
            // 0x275628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27562Cu;
}
