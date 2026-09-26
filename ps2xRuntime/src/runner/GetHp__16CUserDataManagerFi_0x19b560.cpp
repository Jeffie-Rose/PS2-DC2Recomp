#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetHp__16CUserDataManagerFi
// Address: 0x19b560 - 0x19b59c
void GetHp__16CUserDataManagerFi_0x19b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetHp__16CUserDataManagerFi_0x19b560");
#endif

    switch (ctx->pc) {
        case 0x19b570u: goto label_19b570;
        case 0x19b580u: goto label_19b580;
        default: break;
    }

    ctx->pc = 0x19b560u;

    // 0x19b560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b568: 0xc066d30  jal         func_19B4C0
    ctx->pc = 0x19B568u;
    SET_GPR_U32(ctx, 31, 0x19B570u);
    ctx->pc = 0x19B4C0u;
    if (runtime->hasFunction(0x19B4C0u)) {
        auto targetFn = runtime->lookupFunction(0x19B4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B570u; }
        if (ctx->pc != 0x19B570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaHpGage__16CUserDataManagerFi_0x19b4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B570u; }
        if (ctx->pc != 0x19B570u) { return; }
    }
    ctx->pc = 0x19B570u;
label_19b570:
    // 0x19b570: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B570u;
    {
        const bool branch_taken_0x19b570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b570) {
            ctx->pc = 0x19B58Cu;
            goto label_19b58c;
        }
    }
    ctx->pc = 0x19B578u;
    // 0x19b578: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19B578u;
    SET_GPR_U32(ctx, 31, 0x19B580u);
    ctx->pc = 0x19B57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B578u;
            // 0x19b57c: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B580u; }
        if (ctx->pc != 0x19B580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B580u; }
        if (ctx->pc != 0x19B580u) { return; }
    }
    ctx->pc = 0x19B580u;
label_19b580:
    // 0x19b580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b584: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19B584u;
    {
        const bool branch_taken_0x19b584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B584u;
            // 0x19b588: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b584) {
            ctx->pc = 0x19B590u;
            goto label_19b590;
        }
    }
    ctx->pc = 0x19B58Cu;
label_19b58c:
    // 0x19b58c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19b58cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b590:
    // 0x19b590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b594: 0x3e00008  jr          $ra
    ctx->pc = 0x19B594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B594u;
            // 0x19b598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B59Cu;
}
