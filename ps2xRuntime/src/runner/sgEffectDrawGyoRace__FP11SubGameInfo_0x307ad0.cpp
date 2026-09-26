#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgEffectDrawGyoRace__FP11SubGameInfo
// Address: 0x307ad0 - 0x307be8
void sgEffectDrawGyoRace__FP11SubGameInfo_0x307ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgEffectDrawGyoRace__FP11SubGameInfo_0x307ad0");
#endif

    switch (ctx->pc) {
        case 0x307af4u: goto label_307af4;
        case 0x307b04u: goto label_307b04;
        case 0x307b0cu: goto label_307b0c;
        case 0x307b14u: goto label_307b14;
        case 0x307b3cu: goto label_307b3c;
        case 0x307b48u: goto label_307b48;
        case 0x307b54u: goto label_307b54;
        case 0x307b60u: goto label_307b60;
        case 0x307b6cu: goto label_307b6c;
        case 0x307b74u: goto label_307b74;
        case 0x307b80u: goto label_307b80;
        case 0x307b8cu: goto label_307b8c;
        case 0x307ba8u: goto label_307ba8;
        case 0x307bc0u: goto label_307bc0;
        case 0x307bc8u: goto label_307bc8;
        case 0x307bd0u: goto label_307bd0;
        case 0x307bd8u: goto label_307bd8;
        default: break;
    }

    ctx->pc = 0x307ad0u;

    // 0x307ad0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x307ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x307ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x307ad8: 0x9382a138  lbu         $v0, -0x5EC8($gp)
    ctx->pc = 0x307ad8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943032)));
    // 0x307adc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307ADCu;
    {
        const bool branch_taken_0x307adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307ADCu;
            // 0x307ae0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307adc) {
            ctx->pc = 0x307AECu;
            goto label_307aec;
        }
    }
    ctx->pc = 0x307AE4u;
    // 0x307ae4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x307AE4u;
    {
        const bool branch_taken_0x307ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307AE4u;
            // 0x307ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ae4) {
            ctx->pc = 0x307BDCu;
            goto label_307bdc;
        }
    }
    ctx->pc = 0x307AECu;
label_307aec:
    // 0x307aec: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x307AECu;
    SET_GPR_U32(ctx, 31, 0x307AF4u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307AF4u; }
        if (ctx->pc != 0x307AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307AF4u; }
        if (ctx->pc != 0x307AF4u) { return; }
    }
    ctx->pc = 0x307AF4u;
label_307af4:
    // 0x307af4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307afc: 0xc04d104  jal         func_134410
    ctx->pc = 0x307AFCu;
    SET_GPR_U32(ctx, 31, 0x307B04u);
    ctx->pc = 0x307B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307AFCu;
            // 0x307b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B04u; }
        if (ctx->pc != 0x307B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B04u; }
        if (ctx->pc != 0x307B04u) { return; }
    }
    ctx->pc = 0x307B04u;
label_307b04:
    // 0x307b04: 0xc04b120  jal         func_12C480
    ctx->pc = 0x307B04u;
    SET_GPR_U32(ctx, 31, 0x307B0Cu);
    ctx->pc = 0x307B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307B04u;
            // 0x307b08: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B0Cu; }
        if (ctx->pc != 0x307B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B0Cu; }
        if (ctx->pc != 0x307B0Cu) { return; }
    }
    ctx->pc = 0x307B0Cu;
label_307b0c:
    // 0x307b0c: 0xc0510c0  jal         func_144300
    ctx->pc = 0x307B0Cu;
    SET_GPR_U32(ctx, 31, 0x307B14u);
    ctx->pc = 0x307B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307B0Cu;
            // 0x307b10: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144300u;
    if (runtime->hasFunction(0x144300u)) {
        auto targetFn = runtime->lookupFunction(0x144300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B14u; }
        if (ctx->pc != 0x307B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBuffer__FP10mgCTexture_0x144300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B14u; }
        if (ctx->pc != 0x307B14u) { return; }
    }
    ctx->pc = 0x307B14u;
label_307b14:
    // 0x307b14: 0x93a6015c  lbu         $a2, 0x15C($sp)
    ctx->pc = 0x307b14u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x307b18: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x307b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x307b1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x307b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x307b20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307b24: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x307b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x307b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307b2c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x307b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x307b30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x307b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x307b34: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x307B34u;
    SET_GPR_U32(ctx, 31, 0x307B3Cu);
    ctx->pc = 0x307B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307B34u;
            // 0x307b38: 0xa3a2015c  sb          $v0, 0x15C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 348), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B3Cu; }
        if (ctx->pc != 0x307B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B3Cu; }
        if (ctx->pc != 0x307B3Cu) { return; }
    }
    ctx->pc = 0x307B3Cu;
label_307b3c:
    // 0x307b3c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307b40: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x307B40u;
    SET_GPR_U32(ctx, 31, 0x307B48u);
    ctx->pc = 0x307B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307B40u;
            // 0x307b44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B48u; }
        if (ctx->pc != 0x307B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B48u; }
        if (ctx->pc != 0x307B48u) { return; }
    }
    ctx->pc = 0x307B48u;
label_307b48:
    // 0x307b48: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307b4c: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x307B4Cu;
    SET_GPR_U32(ctx, 31, 0x307B54u);
    ctx->pc = 0x307B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307B4Cu;
            // 0x307b50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B54u; }
        if (ctx->pc != 0x307B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B54u; }
        if (ctx->pc != 0x307B54u) { return; }
    }
    ctx->pc = 0x307B54u;
label_307b54:
    // 0x307b54: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307b58: 0xc04d424  jal         func_135090
    ctx->pc = 0x307B58u;
    SET_GPR_U32(ctx, 31, 0x307B60u);
    ctx->pc = 0x307B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307B58u;
            // 0x307b5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B60u; }
        if (ctx->pc != 0x307B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B60u; }
        if (ctx->pc != 0x307B60u) { return; }
    }
    ctx->pc = 0x307B60u;
label_307b60:
    // 0x307b60: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307b64: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x307B64u;
    SET_GPR_U32(ctx, 31, 0x307B6Cu);
    ctx->pc = 0x307B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307B64u;
            // 0x307b68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B6Cu; }
        if (ctx->pc != 0x307B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B6Cu; }
        if (ctx->pc != 0x307B6Cu) { return; }
    }
    ctx->pc = 0x307B6Cu;
label_307b6c:
    // 0x307b6c: 0xc04d1b4  jal         func_1346D0
    ctx->pc = 0x307B6Cu;
    SET_GPR_U32(ctx, 31, 0x307B74u);
    ctx->pc = 0x307B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307B6Cu;
            // 0x307b70: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1346D0u;
    if (runtime->hasFunction(0x1346D0u)) {
        auto targetFn = runtime->lookupFunction(0x1346D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B74u; }
        if (ctx->pc != 0x307B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin2__11mgCDrawPrimFv_0x1346d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B74u; }
        if (ctx->pc != 0x307B74u) { return; }
    }
    ctx->pc = 0x307B74u;
label_307b74:
    // 0x307b74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307b78: 0xc04d218  jal         func_134860
    ctx->pc = 0x307B78u;
    SET_GPR_U32(ctx, 31, 0x307B80u);
    ctx->pc = 0x307B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307B78u;
            // 0x307b7c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134860u;
    if (runtime->hasFunction(0x134860u)) {
        auto targetFn = runtime->lookupFunction(0x134860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B80u; }
        if (ctx->pc != 0x307B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginPrim2__11mgCDrawPrimFi_0x134860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B80u; }
        if (ctx->pc != 0x307B80u) { return; }
    }
    ctx->pc = 0x307B80u;
label_307b80:
    // 0x307b80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307b84: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x307B84u;
    SET_GPR_U32(ctx, 31, 0x307B8Cu);
    ctx->pc = 0x307B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307B84u;
            // 0x307b88: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B8Cu; }
        if (ctx->pc != 0x307B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307B8Cu; }
        if (ctx->pc != 0x307B8Cu) { return; }
    }
    ctx->pc = 0x307B8Cu;
label_307b8c:
    // 0x307b8c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x307b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x307b90: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x307b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x307b94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x307b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x307b98: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307b9c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x307b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x307ba0: 0xc04d360  jal         func_134D80
    ctx->pc = 0x307BA0u;
    SET_GPR_U32(ctx, 31, 0x307BA8u);
    ctx->pc = 0x307BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307BA0u;
            // 0x307ba4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BA8u; }
        if (ctx->pc != 0x307BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BA8u; }
        if (ctx->pc != 0x307BA8u) { return; }
    }
    ctx->pc = 0x307BA8u;
label_307ba8:
    // 0x307ba8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x307ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x307bac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307bb0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x307bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307bb4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x307bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307bb8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x307BB8u;
    SET_GPR_U32(ctx, 31, 0x307BC0u);
    ctx->pc = 0x307BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307BB8u;
            // 0x307bbc: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BC0u; }
        if (ctx->pc != 0x307BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BC0u; }
        if (ctx->pc != 0x307BC0u) { return; }
    }
    ctx->pc = 0x307BC0u;
label_307bc0:
    // 0x307bc0: 0xc04d250  jal         func_134940
    ctx->pc = 0x307BC0u;
    SET_GPR_U32(ctx, 31, 0x307BC8u);
    ctx->pc = 0x307BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307BC0u;
            // 0x307bc4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134940u;
    if (runtime->hasFunction(0x134940u)) {
        auto targetFn = runtime->lookupFunction(0x134940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BC8u; }
        if (ctx->pc != 0x307BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndPrim2__11mgCDrawPrimFv_0x134940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BC8u; }
        if (ctx->pc != 0x307BC8u) { return; }
    }
    ctx->pc = 0x307BC8u;
label_307bc8:
    // 0x307bc8: 0xc0c1dfc  jal         func_3077F0
    ctx->pc = 0x307BC8u;
    SET_GPR_U32(ctx, 31, 0x307BD0u);
    ctx->pc = 0x307BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307BC8u;
            // 0x307bcc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3077F0u;
    if (runtime->hasFunction(0x3077F0u)) {
        auto targetFn = runtime->lookupFunction(0x3077F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BD0u; }
        if (ctx->pc != 0x307BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DivSpriteScreen__FR11mgCDrawPrim_0x3077f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BD0u; }
        if (ctx->pc != 0x307BD0u) { return; }
    }
    ctx->pc = 0x307BD0u;
label_307bd0:
    // 0x307bd0: 0xc04d288  jal         func_134A20
    ctx->pc = 0x307BD0u;
    SET_GPR_U32(ctx, 31, 0x307BD8u);
    ctx->pc = 0x307BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307BD0u;
            // 0x307bd4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A20u;
    if (runtime->hasFunction(0x134A20u)) {
        auto targetFn = runtime->lookupFunction(0x134A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BD8u; }
        if (ctx->pc != 0x307BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End2__11mgCDrawPrimFv_0x134a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307BD8u; }
        if (ctx->pc != 0x307BD8u) { return; }
    }
    ctx->pc = 0x307BD8u;
label_307bd8:
    // 0x307bd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x307bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307bdc:
    // 0x307bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307be0: 0x3e00008  jr          $ra
    ctx->pc = 0x307BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307BE0u;
            // 0x307be4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307BE8u;
}
