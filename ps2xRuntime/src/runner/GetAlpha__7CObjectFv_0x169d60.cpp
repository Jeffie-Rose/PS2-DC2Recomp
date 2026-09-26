#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAlpha__7CObjectFv
// Address: 0x169d60 - 0x169db0
void GetAlpha__7CObjectFv_0x169d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAlpha__7CObjectFv_0x169d60");
#endif

    switch (ctx->pc) {
        case 0x169d60u: goto label_169d60;
        case 0x169d64u: goto label_169d64;
        case 0x169d68u: goto label_169d68;
        case 0x169d6cu: goto label_169d6c;
        case 0x169d70u: goto label_169d70;
        case 0x169d74u: goto label_169d74;
        case 0x169d78u: goto label_169d78;
        case 0x169d7cu: goto label_169d7c;
        case 0x169d80u: goto label_169d80;
        case 0x169d84u: goto label_169d84;
        case 0x169d88u: goto label_169d88;
        case 0x169d8cu: goto label_169d8c;
        case 0x169d90u: goto label_169d90;
        case 0x169d94u: goto label_169d94;
        case 0x169d98u: goto label_169d98;
        case 0x169d9cu: goto label_169d9c;
        case 0x169da0u: goto label_169da0;
        case 0x169da4u: goto label_169da4;
        case 0x169da8u: goto label_169da8;
        case 0x169dacu: goto label_169dac;
        default: break;
    }

    ctx->pc = 0x169d60u;

label_169d60:
    // 0x169d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_169d64:
    // 0x169d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_169d68:
    // 0x169d68: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x169d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_169d6c:
    // 0x169d6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_169d70:
    if (ctx->pc == 0x169D70u) {
        ctx->pc = 0x169D74u;
        goto label_169d74;
    }
    ctx->pc = 0x169D6Cu;
    {
        const bool branch_taken_0x169d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d6c) {
            ctx->pc = 0x169D7Cu;
            goto label_169d7c;
        }
    }
    ctx->pc = 0x169D74u;
label_169d74:
    // 0x169d74: 0x1000000b  b           . + 4 + (0xB << 2)
label_169d78:
    if (ctx->pc == 0x169D78u) {
        ctx->pc = 0x169D78u;
            // 0x169d78: 0xc4800058  lwc1        $f0, 0x58($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x169D7Cu;
        goto label_169d7c;
    }
    ctx->pc = 0x169D74u;
    {
        const bool branch_taken_0x169d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169D74u;
            // 0x169d78: 0xc4800058  lwc1        $f0, 0x58($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d74) {
            ctx->pc = 0x169DA4u;
            goto label_169da4;
        }
    }
    ctx->pc = 0x169D7Cu;
label_169d7c:
    // 0x169d7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x169d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_169d80:
    // 0x169d80: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x169d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_169d84:
    // 0x169d84: 0x320f809  jalr        $t9
label_169d88:
    if (ctx->pc == 0x169D88u) {
        ctx->pc = 0x169D8Cu;
        goto label_169d8c;
    }
    ctx->pc = 0x169D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169D8Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x169D8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169D8Cu; }
            if (ctx->pc != 0x169D8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x169D8Cu;
label_169d8c:
    // 0x169d8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_169d90:
    if (ctx->pc == 0x169D90u) {
        ctx->pc = 0x169D90u;
            // 0x169d90: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x169D94u;
        goto label_169d94;
    }
    ctx->pc = 0x169D8Cu;
    {
        const bool branch_taken_0x169d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169D8Cu;
            // 0x169d90: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d8c) {
            ctx->pc = 0x169DA0u;
            goto label_169da0;
        }
    }
    ctx->pc = 0x169D94u;
label_169d94:
    // 0x169d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_169d98:
    // 0x169d98: 0x10000002  b           . + 4 + (0x2 << 2)
label_169d9c:
    if (ctx->pc == 0x169D9Cu) {
        ctx->pc = 0x169DA0u;
        goto label_169da0;
    }
    ctx->pc = 0x169D98u;
    {
        const bool branch_taken_0x169d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d98) {
            ctx->pc = 0x169DA4u;
            goto label_169da4;
        }
    }
    ctx->pc = 0x169DA0u;
label_169da0:
    // 0x169da0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x169da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_169da4:
    // 0x169da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169da8:
    // 0x169da8: 0x3e00008  jr          $ra
label_169dac:
    if (ctx->pc == 0x169DACu) {
        ctx->pc = 0x169DACu;
            // 0x169dac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x169DB0u;
        goto label_fallthrough_0x169da8;
    }
    ctx->pc = 0x169DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169DA8u;
            // 0x169dac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x169da8:
    ctx->pc = 0x169DB0u;
}
