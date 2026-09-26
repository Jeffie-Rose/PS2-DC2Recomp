#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitFishBattle__Fv
// Address: 0x310ba0 - 0x310c30
void InitFishBattle__Fv_0x310ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitFishBattle__Fv_0x310ba0");
#endif

    switch (ctx->pc) {
        case 0x310becu: goto label_310bec;
        case 0x310c00u: goto label_310c00;
        case 0x310c18u: goto label_310c18;
        default: break;
    }

    ctx->pc = 0x310ba0u;

    // 0x310ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x310ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x310ba4: 0x3c0701f6  lui         $a3, 0x1F6
    ctx->pc = 0x310ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
    // 0x310ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x310ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x310bac: 0x24e7ec70  addiu       $a3, $a3, -0x1390
    ctx->pc = 0x310bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962288));
    // 0x310bb0: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x310bb0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x310bb4: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x310bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x310bb8: 0x24a5edb0  addiu       $a1, $a1, -0x1250
    ctx->pc = 0x310bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962608));
    // 0x310bbc: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x310bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x310bc0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x310bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x310bc4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x310bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x310bc8: 0x2463ed60  addiu       $v1, $v1, -0x12A0
    ctx->pc = 0x310bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962528));
    // 0x310bcc: 0x2442ed70  addiu       $v0, $v0, -0x1290
    ctx->pc = 0x310bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962544));
    // 0x310bd0: 0x2484ed80  addiu       $a0, $a0, -0x1280
    ctx->pc = 0x310bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962560));
    // 0x310bd4: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x310bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x310bd8: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x310bd8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x310bdc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x310bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x310be0: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x310be0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x310be4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x310BE4u;
    SET_GPR_U32(ctx, 31, 0x310BECu);
    ctx->pc = 0x310BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310BE4u;
            // 0x310be8: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310BECu; }
        if (ctx->pc != 0x310BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310BECu; }
        if (ctx->pc != 0x310BECu) { return; }
    }
    ctx->pc = 0x310BECu;
label_310bec:
    // 0x310bec: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x310becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x310bf0: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x310bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x310bf4: 0x2484ec70  addiu       $a0, $a0, -0x1390
    ctx->pc = 0x310bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962288));
    // 0x310bf8: 0xc04c018  jal         func_130060
    ctx->pc = 0x310BF8u;
    SET_GPR_U32(ctx, 31, 0x310C00u);
    ctx->pc = 0x310BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310BF8u;
            // 0x310bfc: 0x24a5dfe0  addiu       $a1, $a1, -0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310C00u; }
        if (ctx->pc != 0x310C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310C00u; }
        if (ctx->pc != 0x310C00u) { return; }
    }
    ctx->pc = 0x310C00u;
label_310c00:
    // 0x310c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310c04: 0xaf80a270  sw          $zero, -0x5D90($gp)
    ctx->pc = 0x310c04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943344), GPR_U32(ctx, 0));
    // 0x310c08: 0xe780a260  swc1        $f0, -0x5DA0($gp)
    ctx->pc = 0x310c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943328), bits); }
    // 0x310c0c: 0xaf82a25c  sw          $v0, -0x5DA4($gp)
    ctx->pc = 0x310c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943324), GPR_U32(ctx, 2));
    // 0x310c10: 0xc0c42d8  jal         func_310B60
    ctx->pc = 0x310C10u;
    SET_GPR_U32(ctx, 31, 0x310C18u);
    ctx->pc = 0x310C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310C10u;
            // 0x310c14: 0xaf80a274  sw          $zero, -0x5D8C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x310B60u;
    if (runtime->hasFunction(0x310B60u)) {
        auto targetFn = runtime->lookupFunction(0x310B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310C18u; }
        if (ctx->pc != 0x310C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextChanceCnt__Fv_0x310b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310C18u; }
        if (ctx->pc != 0x310C18u) { return; }
    }
    ctx->pc = 0x310C18u;
label_310c18:
    // 0x310c18: 0xaf82a278  sw          $v0, -0x5D88($gp)
    ctx->pc = 0x310c18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943352), GPR_U32(ctx, 2));
    // 0x310c1c: 0xaf80a27c  sw          $zero, -0x5D84($gp)
    ctx->pc = 0x310c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943356), GPR_U32(ctx, 0));
    // 0x310c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x310c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310c28: 0x3e00008  jr          $ra
    ctx->pc = 0x310C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310C28u;
            // 0x310c2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310C30u;
}
