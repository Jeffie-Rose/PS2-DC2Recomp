#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPosition__9mgCObjectFfff
// Address: 0x136220 - 0x136258
void SetPosition__9mgCObjectFfff_0x136220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPosition__9mgCObjectFfff_0x136220");
#endif

    switch (ctx->pc) {
        case 0x13624cu: goto label_13624c;
        default: break;
    }

    ctx->pc = 0x136220u;

    // 0x136220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136224: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x136224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x136228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13622c: 0x24424030  addiu       $v0, $v0, 0x4030
    ctx->pc = 0x13622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x136230: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x136230u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136234: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x136234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x136238: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x136238u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x13623c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x13623cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x136240: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x136240u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x136244: 0xc04d864  jal         func_136190
    ctx->pc = 0x136244u;
    SET_GPR_U32(ctx, 31, 0x13624Cu);
    ctx->pc = 0x136248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136244u;
            // 0x136248: 0xe7ae0018  swc1        $f14, 0x18($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x136190u;
    if (runtime->hasFunction(0x136190u)) {
        auto targetFn = runtime->lookupFunction(0x136190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13624Cu; }
        if (ctx->pc != 0x13624Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPosition__9mgCObjectFPf_0x136190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13624Cu; }
        if (ctx->pc != 0x13624Cu) { return; }
    }
    ctx->pc = 0x13624Cu;
label_13624c:
    // 0x13624c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13624cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136250: 0x3e00008  jr          $ra
    ctx->pc = 0x136250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136250u;
            // 0x136254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136258u;
}
