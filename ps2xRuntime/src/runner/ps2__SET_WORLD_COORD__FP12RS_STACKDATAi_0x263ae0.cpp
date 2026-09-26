#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_WORLD_COORD__FP12RS_STACKDATAi
// Address: 0x263ae0 - 0x263b88
void ps2__SET_WORLD_COORD__FP12RS_STACKDATAi_0x263ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_WORLD_COORD__FP12RS_STACKDATAi_0x263ae0");
#endif

    switch (ctx->pc) {
        case 0x263af8u: goto label_263af8;
        case 0x263b0cu: goto label_263b0c;
        case 0x263b20u: goto label_263b20;
        case 0x263b44u: goto label_263b44;
        case 0x263b78u: goto label_263b78;
        default: break;
    }

    ctx->pc = 0x263ae0u;

    // 0x263ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x263ae4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x263ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x263ae8: 0x14a2001f  bne         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x263AE8u;
    {
        const bool branch_taken_0x263ae8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x263AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263AE8u;
            // 0x263aec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ae8) {
            ctx->pc = 0x263B68u;
            goto label_263b68;
        }
    }
    ctx->pc = 0x263AF0u;
    // 0x263af0: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x263AF0u;
    SET_GPR_U32(ctx, 31, 0x263AF8u);
    ctx->pc = 0x263AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263AF0u;
            // 0x263af4: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263AF8u; }
        if (ctx->pc != 0x263AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263AF8u; }
        if (ctx->pc != 0x263AF8u) { return; }
    }
    ctx->pc = 0x263AF8u;
label_263af8:
    // 0x263af8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x263af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x263afc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x263afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b00: 0xe420e430  swc1        $f0, -0x1BD0($at)
    ctx->pc = 0x263b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960176), bits); }
    // 0x263b04: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x263B04u;
    SET_GPR_U32(ctx, 31, 0x263B0Cu);
    ctx->pc = 0x263B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263B04u;
            // 0x263b08: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B0Cu; }
        if (ctx->pc != 0x263B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B0Cu; }
        if (ctx->pc != 0x263B0Cu) { return; }
    }
    ctx->pc = 0x263B0Cu;
label_263b0c:
    // 0x263b0c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x263b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x263b10: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x263b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b14: 0xe420e434  swc1        $f0, -0x1BCC($at)
    ctx->pc = 0x263b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960180), bits); }
    // 0x263b18: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x263B18u;
    SET_GPR_U32(ctx, 31, 0x263B20u);
    ctx->pc = 0x263B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263B18u;
            // 0x263b1c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B20u; }
        if (ctx->pc != 0x263B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B20u; }
        if (ctx->pc != 0x263B20u) { return; }
    }
    ctx->pc = 0x263B20u;
label_263b20:
    // 0x263b20: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x263b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x263b24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x263b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x263b28: 0xe420e438  swc1        $f0, -0x1BC8($at)
    ctx->pc = 0x263b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960184), bits); }
    // 0x263b2c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x263b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b30: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x263b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x263b34: 0xac20e440  sw          $zero, -0x1BC0($at)
    ctx->pc = 0x263b34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960192), GPR_U32(ctx, 0));
    // 0x263b38: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x263b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x263b3c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x263B3Cu;
    SET_GPR_U32(ctx, 31, 0x263B44u);
    ctx->pc = 0x263B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263B3Cu;
            // 0x263b40: 0xac22e43c  sw          $v0, -0x1BC4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B44u; }
        if (ctx->pc != 0x263B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B44u; }
        if (ctx->pc != 0x263B44u) { return; }
    }
    ctx->pc = 0x263B44u;
label_263b44:
    // 0x263b44: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x263b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x263b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263b4c: 0xe420e444  swc1        $f0, -0x1BBC($at)
    ctx->pc = 0x263b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960196), bits); }
    // 0x263b50: 0xaf8297f4  sw          $v0, -0x680C($gp)
    ctx->pc = 0x263b50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940660), GPR_U32(ctx, 2));
    // 0x263b54: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x263b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x263b58: 0xac20e448  sw          $zero, -0x1BB8($at)
    ctx->pc = 0x263b58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960200), GPR_U32(ctx, 0));
    // 0x263b5c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x263b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x263b60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x263B60u;
    {
        const bool branch_taken_0x263b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263B60u;
            // 0x263b64: 0xac20e44c  sw          $zero, -0x1BB4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b60) {
            ctx->pc = 0x263B7Cu;
            goto label_263b7c;
        }
    }
    ctx->pc = 0x263B68u;
label_263b68:
    // 0x263b68: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x263B68u;
    {
        const bool branch_taken_0x263b68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x263B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263B68u;
            // 0x263b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b68) {
            ctx->pc = 0x263B7Cu;
            goto label_263b7c;
        }
    }
    ctx->pc = 0x263B70u;
    // 0x263b70: 0xc0983dc  jal         func_260F70
    ctx->pc = 0x263B70u;
    SET_GPR_U32(ctx, 31, 0x263B78u);
    ctx->pc = 0x260F70u;
    if (runtime->hasFunction(0x260F70u)) {
        auto targetFn = runtime->lookupFunction(0x260F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B78u; }
        if (ctx->pc != 0x263B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitWorldCoord__Fv_0x260f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263B78u; }
        if (ctx->pc != 0x263B78u) { return; }
    }
    ctx->pc = 0x263B78u;
label_263b78:
    // 0x263b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263b7c:
    // 0x263b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263b80: 0x3e00008  jr          $ra
    ctx->pc = 0x263B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263B80u;
            // 0x263b84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263B88u;
}
