#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowWhp__16CBattleCharaInfoFiPi
// Address: 0x19fa10 - 0x19fa60
void GetNowWhp__16CBattleCharaInfoFiPi_0x19fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowWhp__16CBattleCharaInfoFiPi_0x19fa10");
#endif

    switch (ctx->pc) {
        case 0x19fa28u: goto label_19fa28;
        case 0x19fa3cu: goto label_19fa3c;
        case 0x19fa48u: goto label_19fa48;
        default: break;
    }

    ctx->pc = 0x19fa10u;

    // 0x19fa10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19fa14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19fa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19fa18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19fa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19fa1c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19fa1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa20: 0xc067e24  jal         func_19F890
    ctx->pc = 0x19FA20u;
    SET_GPR_U32(ctx, 31, 0x19FA28u);
    ctx->pc = 0x19FA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA20u;
            // 0x19fa24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F890u;
    if (runtime->hasFunction(0x19F890u)) {
        auto targetFn = runtime->lookupFunction(0x19F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA28u; }
        if (ctx->pc != 0x19FA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowAccessWHp__16CBattleCharaInfoFi_0x19f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA28u; }
        if (ctx->pc != 0x19FA28u) { return; }
    }
    ctx->pc = 0x19FA28u;
label_19fa28:
    // 0x19fa28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19fa28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa2c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19FA2Cu;
    {
        const bool branch_taken_0x19fa2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fa2c) {
            ctx->pc = 0x19FA4Cu;
            goto label_19fa4c;
        }
    }
    ctx->pc = 0x19FA34u;
    // 0x19fa34: 0xc0945c8  jal         func_251720
    ctx->pc = 0x19FA34u;
    SET_GPR_U32(ctx, 31, 0x19FA3Cu);
    ctx->pc = 0x19FA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA34u;
            // 0x19fa38: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA3Cu; }
        if (ctx->pc != 0x19FA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA3Cu; }
        if (ctx->pc != 0x19FA3Cu) { return; }
    }
    ctx->pc = 0x19FA3Cu;
label_19fa3c:
    // 0x19fa3c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x19fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x19fa40: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19FA40u;
    SET_GPR_U32(ctx, 31, 0x19FA48u);
    ctx->pc = 0x19FA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA40u;
            // 0x19fa44: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA48u; }
        if (ctx->pc != 0x19FA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA48u; }
        if (ctx->pc != 0x19FA48u) { return; }
    }
    ctx->pc = 0x19FA48u;
label_19fa48:
    // 0x19fa48: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x19fa48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_19fa4c:
    // 0x19fa4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19fa4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fa50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19fa50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fa54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19fa54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fa58: 0x3e00008  jr          $ra
    ctx->pc = 0x19FA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA58u;
            // 0x19fa5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FA60u;
}
