#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishRecord__16CUserDataManagerFiPfPf
// Address: 0x19d200 - 0x19d26c
void GetFishRecord__16CUserDataManagerFiPfPf_0x19d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishRecord__16CUserDataManagerFiPfPf_0x19d200");
#endif

    switch (ctx->pc) {
        case 0x19d230u: goto label_19d230;
        default: break;
    }

    ctx->pc = 0x19d200u;

    // 0x19d200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d204: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19d204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19d208: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19d208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d20c: 0x34215258  ori         $at, $at, 0x5258
    ctx->pc = 0x19d20cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21080);
    // 0x19d210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d214: 0x812021  addu        $a0, $a0, $at
    ctx->pc = 0x19d214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19d218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d21c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19d21cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d220: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x19D220u;
    {
        const bool branch_taken_0x19d220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D220u;
            // 0x19d224: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d220) {
            ctx->pc = 0x19D258u;
            goto label_19d258;
        }
    }
    ctx->pc = 0x19D228u;
    // 0x19d228: 0xc066b90  jal         func_19AE40
    ctx->pc = 0x19D228u;
    SET_GPR_U32(ctx, 31, 0x19D230u);
    ctx->pc = 0x19AE40u;
    if (runtime->hasFunction(0x19AE40u)) {
        auto targetFn = runtime->lookupFunction(0x19AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D230u; }
        if (ctx->pc != 0x19D230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishRecord__14CFishingRecordFi_0x19ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D230u; }
        if (ctx->pc != 0x19D230u) { return; }
    }
    ctx->pc = 0x19D230u;
label_19d230:
    // 0x19d230: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19D230u;
    {
        const bool branch_taken_0x19d230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d230) {
            ctx->pc = 0x19D258u;
            goto label_19d258;
        }
    }
    ctx->pc = 0x19D238u;
    // 0x19d238: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D238u;
    {
        const bool branch_taken_0x19d238 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d238) {
            ctx->pc = 0x19D248u;
            goto label_19d248;
        }
    }
    ctx->pc = 0x19D240u;
    // 0x19d240: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19d240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d244: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x19d244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_19d248:
    // 0x19d248: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D248u;
    {
        const bool branch_taken_0x19d248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d248) {
            ctx->pc = 0x19D258u;
            goto label_19d258;
        }
    }
    ctx->pc = 0x19D250u;
    // 0x19d250: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19d250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d254: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x19d254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_19d258:
    // 0x19d258: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19d258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d25c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d264: 0x3e00008  jr          $ra
    ctx->pc = 0x19D264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D264u;
            // 0x19d268: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D26Cu;
}
