#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_editmenu.cpp
// Address: 0x374200 - 0x374258
void ps2___sinit_editmenu_cpp_0x374200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_editmenu_cpp_0x374200");
#endif

    switch (ctx->pc) {
        case 0x374214u: goto label_374214;
        case 0x374230u: goto label_374230;
        case 0x37424cu: goto label_37424c;
        default: break;
    }

    ctx->pc = 0x374200u;

    // 0x374200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374204: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37420c: 0xc04e640  jal         func_139900
    ctx->pc = 0x37420Cu;
    SET_GPR_U32(ctx, 31, 0x374214u);
    ctx->pc = 0x374210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37420Cu;
            // 0x374210: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374214u; }
        if (ctx->pc != 0x374214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374214u; }
        if (ctx->pc != 0x374214u) { return; }
    }
    ctx->pc = 0x374214u;
label_374214:
    // 0x374214: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374218: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x374218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x37421c: 0x248495e0  addiu       $a0, $a0, -0x6A20
    ctx->pc = 0x37421cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940128));
    // 0x374220: 0x24050174  addiu       $a1, $zero, 0x174
    ctx->pc = 0x374220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x374224: 0x240600be  addiu       $a2, $zero, 0xBE
    ctx->pc = 0x374224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x374228: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x374228u;
    SET_GPR_U32(ctx, 31, 0x374230u);
    ctx->pc = 0x37422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374228u;
            // 0x37422c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374230u; }
        if (ctx->pc != 0x374230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374230u; }
        if (ctx->pc != 0x374230u) { return; }
    }
    ctx->pc = 0x374230u;
label_374230:
    // 0x374230: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374234: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x374234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x374238: 0x248495f0  addiu       $a0, $a0, -0x6A10
    ctx->pc = 0x374238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940144));
    // 0x37423c: 0x24050164  addiu       $a1, $zero, 0x164
    ctx->pc = 0x37423cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x374240: 0x240600be  addiu       $a2, $zero, 0xBE
    ctx->pc = 0x374240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x374244: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x374244u;
    SET_GPR_U32(ctx, 31, 0x37424Cu);
    ctx->pc = 0x374248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374244u;
            // 0x374248: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37424Cu; }
        if (ctx->pc != 0x37424Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37424Cu; }
        if (ctx->pc != 0x37424Cu) { return; }
    }
    ctx->pc = 0x37424Cu;
label_37424c:
    // 0x37424c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37424cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374250: 0x3e00008  jr          $ra
    ctx->pc = 0x374250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374250u;
            // 0x374254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374258u;
}
