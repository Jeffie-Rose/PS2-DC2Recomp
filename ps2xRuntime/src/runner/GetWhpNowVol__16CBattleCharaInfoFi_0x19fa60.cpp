#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWhpNowVol__16CBattleCharaInfoFi
// Address: 0x19fa60 - 0x19fa98
void GetWhpNowVol__16CBattleCharaInfoFi_0x19fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWhpNowVol__16CBattleCharaInfoFi_0x19fa60");
#endif

    switch (ctx->pc) {
        case 0x19fa70u: goto label_19fa70;
        case 0x19fa80u: goto label_19fa80;
        default: break;
    }

    ctx->pc = 0x19fa60u;

    // 0x19fa60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19fa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fa64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fa68: 0xc067e24  jal         func_19F890
    ctx->pc = 0x19FA68u;
    SET_GPR_U32(ctx, 31, 0x19FA70u);
    ctx->pc = 0x19F890u;
    if (runtime->hasFunction(0x19F890u)) {
        auto targetFn = runtime->lookupFunction(0x19F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA70u; }
        if (ctx->pc != 0x19FA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowAccessWHp__16CBattleCharaInfoFi_0x19f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA70u; }
        if (ctx->pc != 0x19FA70u) { return; }
    }
    ctx->pc = 0x19FA70u;
label_19fa70:
    // 0x19fa70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FA70u;
    {
        const bool branch_taken_0x19fa70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fa70) {
            ctx->pc = 0x19FA88u;
            goto label_19fa88;
        }
    }
    ctx->pc = 0x19FA78u;
    // 0x19fa78: 0xc0945c8  jal         func_251720
    ctx->pc = 0x19FA78u;
    SET_GPR_U32(ctx, 31, 0x19FA80u);
    ctx->pc = 0x19FA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA78u;
            // 0x19fa7c: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA80u; }
        if (ctx->pc != 0x19FA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA80u; }
        if (ctx->pc != 0x19FA80u) { return; }
    }
    ctx->pc = 0x19FA80u;
label_19fa80:
    // 0x19fa80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19FA80u;
    {
        const bool branch_taken_0x19fa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA80u;
            // 0x19fa84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa80) {
            ctx->pc = 0x19FA90u;
            goto label_19fa90;
        }
    }
    ctx->pc = 0x19FA88u;
label_19fa88:
    // 0x19fa88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19fa88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fa8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19fa90:
    // 0x19fa90: 0x3e00008  jr          $ra
    ctx->pc = 0x19FA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA90u;
            // 0x19fa94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FA98u;
}
