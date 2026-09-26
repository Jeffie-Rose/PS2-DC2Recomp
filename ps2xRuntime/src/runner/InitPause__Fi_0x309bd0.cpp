#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitPause__Fi
// Address: 0x309bd0 - 0x309c7c
void InitPause__Fi_0x309bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPause__Fi_0x309bd0");
#endif

    switch (ctx->pc) {
        case 0x309c0cu: goto label_309c0c;
        case 0x309c3cu: goto label_309c3c;
        case 0x309c60u: goto label_309c60;
        default: break;
    }

    ctx->pc = 0x309bd0u;

    // 0x309bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x309bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x309bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309bd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x309bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x309bdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x309bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x309be0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x309be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x309be4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x309be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309be8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x309be8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x309bec: 0xaf82a1ac  sw          $v0, -0x5E54($gp)
    ctx->pc = 0x309becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943148), GPR_U32(ctx, 2));
    // 0x309bf0: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x309bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x309bf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x309bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309bfc: 0xaf80a1a8  sw          $zero, -0x5E58($gp)
    ctx->pc = 0x309bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943144), GPR_U32(ctx, 0));
    // 0x309c00: 0xaf80a1c0  sw          $zero, -0x5E40($gp)
    ctx->pc = 0x309c00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943168), GPR_U32(ctx, 0));
    // 0x309c04: 0xc04b950  jal         func_12E540
    ctx->pc = 0x309C04u;
    SET_GPR_U32(ctx, 31, 0x309C0Cu);
    ctx->pc = 0x309C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309C04u;
            // 0x309c08: 0xaf80a1b0  sw          $zero, -0x5E50($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309C0Cu; }
        if (ctx->pc != 0x309C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309C0Cu; }
        if (ctx->pc != 0x309C0Cu) { return; }
    }
    ctx->pc = 0x309C0Cu;
label_309c0c:
    // 0x309c0c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x309c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x309c10: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x309c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x309c14: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x309c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x309c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c1c: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x309c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x309c20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x309c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c24: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x309c24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x309c28: 0x24c62488  addiu       $a2, $a2, 0x2488
    ctx->pc = 0x309c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9352));
    // 0x309c2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x309c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c30: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x309c30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x309c34: 0xc04b450  jal         func_12D140
    ctx->pc = 0x309C34u;
    SET_GPR_U32(ctx, 31, 0x309C3Cu);
    ctx->pc = 0x309C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309C34u;
            // 0x309c38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309C3Cu; }
        if (ctx->pc != 0x309C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309C3Cu; }
        if (ctx->pc != 0x309C3Cu) { return; }
    }
    ctx->pc = 0x309C3Cu;
label_309c3c:
    // 0x309c3c: 0x8f82a1a4  lw          $v0, -0x5E5C($gp)
    ctx->pc = 0x309c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943140)));
    // 0x309c40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309C40u;
    {
        const bool branch_taken_0x309c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309C40u;
            // 0x309c44: 0x3c0501f6  lui         $a1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c40) {
            ctx->pc = 0x309C60u;
            goto label_309c60;
        }
    }
    ctx->pc = 0x309C48u;
    // 0x309c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c4c: 0x24a5b4c0  addiu       $a1, $a1, -0x4B40
    ctx->pc = 0x309c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948032));
    // 0x309c50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x309c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x309c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c58: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x309C58u;
    SET_GPR_U32(ctx, 31, 0x309C60u);
    ctx->pc = 0x309C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309C58u;
            // 0x309c5c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309C60u; }
        if (ctx->pc != 0x309C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309C60u; }
        if (ctx->pc != 0x309C60u) { return; }
    }
    ctx->pc = 0x309C60u;
label_309c60:
    // 0x309c60: 0xaf91a1b4  sw          $s1, -0x5E4C($gp)
    ctx->pc = 0x309c60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943156), GPR_U32(ctx, 17));
    // 0x309c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309c68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x309c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309c6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x309c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309c70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x309c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309c74: 0x3e00008  jr          $ra
    ctx->pc = 0x309C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309C74u;
            // 0x309c78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309C7Cu;
}
