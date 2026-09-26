#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__9CParticleFv
// Address: 0x281b10 - 0x281cd8
void Draw__9CParticleFv_0x281b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__9CParticleFv_0x281b10");
#endif

    switch (ctx->pc) {
        case 0x281b30u: goto label_281b30;
        case 0x281b40u: goto label_281b40;
        case 0x281b4cu: goto label_281b4c;
        case 0x281b58u: goto label_281b58;
        case 0x281b64u: goto label_281b64;
        case 0x281b74u: goto label_281b74;
        case 0x281b80u: goto label_281b80;
        case 0x281b8cu: goto label_281b8c;
        case 0x281b98u: goto label_281b98;
        case 0x281ba4u: goto label_281ba4;
        case 0x281bb0u: goto label_281bb0;
        case 0x281bbcu: goto label_281bbc;
        case 0x281bc8u: goto label_281bc8;
        case 0x281bd4u: goto label_281bd4;
        case 0x281be0u: goto label_281be0;
        case 0x281becu: goto label_281bec;
        case 0x281bf8u: goto label_281bf8;
        case 0x281c00u: goto label_281c00;
        case 0x281c0cu: goto label_281c0c;
        case 0x281c20u: goto label_281c20;
        case 0x281c44u: goto label_281c44;
        case 0x281c84u: goto label_281c84;
        case 0x281c9cu: goto label_281c9c;
        case 0x281ca8u: goto label_281ca8;
        case 0x281cbcu: goto label_281cbc;
        case 0x281cc8u: goto label_281cc8;
        default: break;
    }

    ctx->pc = 0x281b10u;

    // 0x281b10: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x281b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x281b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281b1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x281b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x281b20: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x281B20u;
    {
        const bool branch_taken_0x281b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281B20u;
            // 0x281b24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b20) {
            ctx->pc = 0x281CC8u;
            goto label_281cc8;
        }
    }
    ctx->pc = 0x281B28u;
    // 0x281b28: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x281B28u;
    SET_GPR_U32(ctx, 31, 0x281B30u);
    ctx->pc = 0x281B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281B28u;
            // 0x281b2c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B30u; }
        if (ctx->pc != 0x281B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B30u; }
        if (ctx->pc != 0x281B30u) { return; }
    }
    ctx->pc = 0x281B30u;
label_281b30:
    // 0x281b30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x281b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b38: 0xc04d104  jal         func_134410
    ctx->pc = 0x281B38u;
    SET_GPR_U32(ctx, 31, 0x281B40u);
    ctx->pc = 0x281B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281B38u;
            // 0x281b3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B40u; }
        if (ctx->pc != 0x281B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B40u; }
        if (ctx->pc != 0x281B40u) { return; }
    }
    ctx->pc = 0x281B40u;
label_281b40:
    // 0x281b40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281b44: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x281B44u;
    SET_GPR_U32(ctx, 31, 0x281B4Cu);
    ctx->pc = 0x281B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281B44u;
            // 0x281b48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B4Cu; }
        if (ctx->pc != 0x281B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B4Cu; }
        if (ctx->pc != 0x281B4Cu) { return; }
    }
    ctx->pc = 0x281B4Cu;
label_281b4c:
    // 0x281b4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281b50: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x281B50u;
    SET_GPR_U32(ctx, 31, 0x281B58u);
    ctx->pc = 0x281B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281B50u;
            // 0x281b54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B58u; }
        if (ctx->pc != 0x281B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B58u; }
        if (ctx->pc != 0x281B58u) { return; }
    }
    ctx->pc = 0x281B58u;
label_281b58:
    // 0x281b58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281b5c: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x281B5Cu;
    SET_GPR_U32(ctx, 31, 0x281B64u);
    ctx->pc = 0x281B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281B5Cu;
            // 0x281b60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B64u; }
        if (ctx->pc != 0x281B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B64u; }
        if (ctx->pc != 0x281B64u) { return; }
    }
    ctx->pc = 0x281B64u;
label_281b64:
    // 0x281b64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281b68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x281b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281b6c: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x281B6Cu;
    SET_GPR_U32(ctx, 31, 0x281B74u);
    ctx->pc = 0x281B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281B6Cu;
            // 0x281b70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B74u; }
        if (ctx->pc != 0x281B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B74u; }
        if (ctx->pc != 0x281B74u) { return; }
    }
    ctx->pc = 0x281B74u;
label_281b74:
    // 0x281b74: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281b78: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x281B78u;
    SET_GPR_U32(ctx, 31, 0x281B80u);
    ctx->pc = 0x281B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281B78u;
            // 0x281b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B80u; }
        if (ctx->pc != 0x281B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B80u; }
        if (ctx->pc != 0x281B80u) { return; }
    }
    ctx->pc = 0x281B80u;
label_281b80:
    // 0x281b80: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281b84: 0xc04d424  jal         func_135090
    ctx->pc = 0x281B84u;
    SET_GPR_U32(ctx, 31, 0x281B8Cu);
    ctx->pc = 0x281B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281B84u;
            // 0x281b88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B8Cu; }
        if (ctx->pc != 0x281B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B8Cu; }
        if (ctx->pc != 0x281B8Cu) { return; }
    }
    ctx->pc = 0x281B8Cu;
label_281b8c:
    // 0x281b8c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281b90: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x281B90u;
    SET_GPR_U32(ctx, 31, 0x281B98u);
    ctx->pc = 0x281B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281B90u;
            // 0x281b94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B98u; }
        if (ctx->pc != 0x281B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B98u; }
        if (ctx->pc != 0x281B98u) { return; }
    }
    ctx->pc = 0x281B98u;
label_281b98:
    // 0x281b98: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281b9c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x281B9Cu;
    SET_GPR_U32(ctx, 31, 0x281BA4u);
    ctx->pc = 0x281BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281B9Cu;
            // 0x281ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BA4u; }
        if (ctx->pc != 0x281BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BA4u; }
        if (ctx->pc != 0x281BA4u) { return; }
    }
    ctx->pc = 0x281BA4u;
label_281ba4:
    // 0x281ba4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281ba8: 0xc04d44c  jal         func_135130
    ctx->pc = 0x281BA8u;
    SET_GPR_U32(ctx, 31, 0x281BB0u);
    ctx->pc = 0x281BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281BA8u;
            // 0x281bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BB0u; }
        if (ctx->pc != 0x281BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BB0u; }
        if (ctx->pc != 0x281BB0u) { return; }
    }
    ctx->pc = 0x281BB0u;
label_281bb0:
    // 0x281bb0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281bb4: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x281BB4u;
    SET_GPR_U32(ctx, 31, 0x281BBCu);
    ctx->pc = 0x281BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281BB4u;
            // 0x281bb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BBCu; }
        if (ctx->pc != 0x281BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BBCu; }
        if (ctx->pc != 0x281BBCu) { return; }
    }
    ctx->pc = 0x281BBCu;
label_281bbc:
    // 0x281bbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281bc0: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x281BC0u;
    SET_GPR_U32(ctx, 31, 0x281BC8u);
    ctx->pc = 0x281BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281BC0u;
            // 0x281bc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BC8u; }
        if (ctx->pc != 0x281BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BC8u; }
        if (ctx->pc != 0x281BC8u) { return; }
    }
    ctx->pc = 0x281BC8u;
label_281bc8:
    // 0x281bc8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281bcc: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x281BCCu;
    SET_GPR_U32(ctx, 31, 0x281BD4u);
    ctx->pc = 0x281BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281BCCu;
            // 0x281bd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BD4u; }
        if (ctx->pc != 0x281BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BD4u; }
        if (ctx->pc != 0x281BD4u) { return; }
    }
    ctx->pc = 0x281BD4u;
label_281bd4:
    // 0x281bd4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281bd8: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x281BD8u;
    SET_GPR_U32(ctx, 31, 0x281BE0u);
    ctx->pc = 0x281BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281BD8u;
            // 0x281bdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BE0u; }
        if (ctx->pc != 0x281BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BE0u; }
        if (ctx->pc != 0x281BE0u) { return; }
    }
    ctx->pc = 0x281BE0u;
label_281be0:
    // 0x281be0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281be4: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x281BE4u;
    SET_GPR_U32(ctx, 31, 0x281BECu);
    ctx->pc = 0x281BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281BE4u;
            // 0x281be8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BECu; }
        if (ctx->pc != 0x281BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BECu; }
        if (ctx->pc != 0x281BECu) { return; }
    }
    ctx->pc = 0x281BECu;
label_281bec:
    // 0x281bec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281bf0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x281BF0u;
    SET_GPR_U32(ctx, 31, 0x281BF8u);
    ctx->pc = 0x281BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281BF0u;
            // 0x281bf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BF8u; }
        if (ctx->pc != 0x281BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BF8u; }
        if (ctx->pc != 0x281BF8u) { return; }
    }
    ctx->pc = 0x281BF8u;
label_281bf8:
    // 0x281bf8: 0xc06421c  jal         func_190870
    ctx->pc = 0x281BF8u;
    SET_GPR_U32(ctx, 31, 0x281C00u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C00u; }
        if (ctx->pc != 0x281C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C00u; }
        if (ctx->pc != 0x281C00u) { return; }
    }
    ctx->pc = 0x281C00u;
label_281c00:
    // 0x281c00: 0x8c452e54  lw          $a1, 0x2E54($v0)
    ctx->pc = 0x281c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11860)));
    // 0x281c04: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x281C04u;
    SET_GPR_U32(ctx, 31, 0x281C0Cu);
    ctx->pc = 0x281C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281C04u;
            // 0x281c08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C0Cu; }
        if (ctx->pc != 0x281C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C0Cu; }
        if (ctx->pc != 0x281C0Cu) { return; }
    }
    ctx->pc = 0x281C0Cu;
label_281c0c:
    // 0x281c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x281c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c10: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x281C10u;
    {
        const bool branch_taken_0x281c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x281C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281C10u;
            // 0x281c14: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c10) {
            ctx->pc = 0x281CC8u;
            goto label_281cc8;
        }
    }
    ctx->pc = 0x281C18u;
    // 0x281c18: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x281C18u;
    SET_GPR_U32(ctx, 31, 0x281C20u);
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C20u; }
        if (ctx->pc != 0x281C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C20u; }
        if (ctx->pc != 0x281C20u) { return; }
    }
    ctx->pc = 0x281C20u;
label_281c20:
    // 0x281c20: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x281c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x281c24: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x281c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281c28: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x281c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281c2c: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x281c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281c30: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x281c30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x281c34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x281c34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x281c38: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x281c38u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x281c3c: 0xc047cc0  jal         func_11F300
    ctx->pc = 0x281C3Cu;
    SET_GPR_U32(ctx, 31, 0x281C44u);
    ctx->pc = 0x281C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281C3Cu;
            // 0x281c40: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C44u; }
        if (ctx->pc != 0x281C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C44u; }
        if (ctx->pc != 0x281C44u) { return; }
    }
    ctx->pc = 0x281C44u;
label_281c44:
    // 0x281c44: 0x3c03beda  lui         $v1, 0xBEDA
    ctx->pc = 0x281c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48858 << 16));
    // 0x281c48: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x281c48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x281c4c: 0x3463740e  ori         $v1, $v1, 0x740E
    ctx->pc = 0x281c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29710);
    // 0x281c50: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x281c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x281c54: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x281c54u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x281c58: 0x0  nop
    ctx->pc = 0x281c58u;
    // NOP
    // 0x281c5c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x281c5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x281c60: 0x46001b00  add.s       $f12, $f3, $f0
    ctx->pc = 0x281c60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x281c64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x281c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281c68: 0x0  nop
    ctx->pc = 0x281c68u;
    // NOP
    // 0x281c6c: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x281c6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281c70: 0x0  nop
    ctx->pc = 0x281c70u;
    // NOP
    // 0x281c74: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x281C74u;
    {
        const bool branch_taken_0x281c74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x281c74) {
            ctx->pc = 0x281CC8u;
            goto label_281cc8;
        }
    }
    ctx->pc = 0x281C7Cu;
    // 0x281c7c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x281C7Cu;
    SET_GPR_U32(ctx, 31, 0x281C84u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C84u; }
        if (ctx->pc != 0x281C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C84u; }
        if (ctx->pc != 0x281C84u) { return; }
    }
    ctx->pc = 0x281C84u;
label_281c84:
    // 0x281c84: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x281c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x281c88: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x281c88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c8c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281c90: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x281c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c94: 0xc04d320  jal         func_134C80
    ctx->pc = 0x281C94u;
    SET_GPR_U32(ctx, 31, 0x281C9Cu);
    ctx->pc = 0x281C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281C94u;
            // 0x281c98: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C9Cu; }
        if (ctx->pc != 0x281C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281C9Cu; }
        if (ctx->pc != 0x281C9Cu) { return; }
    }
    ctx->pc = 0x281C9Cu;
label_281c9c:
    // 0x281c9c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x281c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x281ca0: 0xc051638  jal         func_1458E0
    ctx->pc = 0x281CA0u;
    SET_GPR_U32(ctx, 31, 0x281CA8u);
    ctx->pc = 0x281CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281CA0u;
            // 0x281ca4: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281CA8u; }
        if (ctx->pc != 0x281CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281CA8u; }
        if (ctx->pc != 0x281CA8u) { return; }
    }
    ctx->pc = 0x281CA8u;
label_281ca8:
    // 0x281ca8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281CA8u;
    {
        const bool branch_taken_0x281ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281CA8u;
            // 0x281cac: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ca8) {
            ctx->pc = 0x281CC0u;
            goto label_281cc0;
        }
    }
    ctx->pc = 0x281CB0u;
    // 0x281cb0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281cb4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x281CB4u;
    SET_GPR_U32(ctx, 31, 0x281CBCu);
    ctx->pc = 0x281CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281CB4u;
            // 0x281cb8: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281CBCu; }
        if (ctx->pc != 0x281CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281CBCu; }
        if (ctx->pc != 0x281CBCu) { return; }
    }
    ctx->pc = 0x281CBCu;
label_281cbc:
    // 0x281cbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x281cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_281cc0:
    // 0x281cc0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x281CC0u;
    SET_GPR_U32(ctx, 31, 0x281CC8u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281CC8u; }
        if (ctx->pc != 0x281CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281CC8u; }
        if (ctx->pc != 0x281CC8u) { return; }
    }
    ctx->pc = 0x281CC8u;
label_281cc8:
    // 0x281cc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x281cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281ccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x281CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281CD0u;
            // 0x281cd4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281CD8u;
}
