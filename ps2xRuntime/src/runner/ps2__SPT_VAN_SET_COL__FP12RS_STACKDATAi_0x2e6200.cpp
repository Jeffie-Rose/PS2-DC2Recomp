#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_VAN_SET_COL__FP12RS_STACKDATAi
// Address: 0x2e6200 - 0x2e637c
void ps2__SPT_VAN_SET_COL__FP12RS_STACKDATAi_0x2e6200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_VAN_SET_COL__FP12RS_STACKDATAi_0x2e6200");
#endif

    switch (ctx->pc) {
        case 0x2e6228u: goto label_2e6228;
        case 0x2e6238u: goto label_2e6238;
        case 0x2e6248u: goto label_2e6248;
        case 0x2e6258u: goto label_2e6258;
        case 0x2e6268u: goto label_2e6268;
        case 0x2e6278u: goto label_2e6278;
        case 0x2e6288u: goto label_2e6288;
        case 0x2e6298u: goto label_2e6298;
        case 0x2e62a8u: goto label_2e62a8;
        case 0x2e62b8u: goto label_2e62b8;
        case 0x2e62c8u: goto label_2e62c8;
        case 0x2e62d8u: goto label_2e62d8;
        case 0x2e62e8u: goto label_2e62e8;
        case 0x2e62fcu: goto label_2e62fc;
        case 0x2e6308u: goto label_2e6308;
        case 0x2e6314u: goto label_2e6314;
        case 0x2e6338u: goto label_2e6338;
        case 0x2e6348u: goto label_2e6348;
        default: break;
    }

    ctx->pc = 0x2e6200u;

    // 0x2e6200: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e6200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e6204: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e6204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e6208: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e6208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e620c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e620cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e6210: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6214: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e6218: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e621c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e621cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6220: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6220u;
    SET_GPR_U32(ctx, 31, 0x2E6228u);
    ctx->pc = 0x2E6224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6220u;
            // 0x2e6224: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6228u; }
        if (ctx->pc != 0x2E6228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6228u; }
        if (ctx->pc != 0x2E6228u) { return; }
    }
    ctx->pc = 0x2E6228u;
label_2e6228:
    // 0x2e6228: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e622c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e622cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6230: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6230u;
    SET_GPR_U32(ctx, 31, 0x2E6238u);
    ctx->pc = 0x2E6234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6230u;
            // 0x2e6234: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6238u; }
        if (ctx->pc != 0x2E6238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6238u; }
        if (ctx->pc != 0x2E6238u) { return; }
    }
    ctx->pc = 0x2E6238u;
label_2e6238:
    // 0x2e6238: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e623c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2e623cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e6240: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6240u;
    SET_GPR_U32(ctx, 31, 0x2E6248u);
    ctx->pc = 0x2E6244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6240u;
            // 0x2e6244: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6248u; }
        if (ctx->pc != 0x2E6248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6248u; }
        if (ctx->pc != 0x2E6248u) { return; }
    }
    ctx->pc = 0x2E6248u;
label_2e6248:
    // 0x2e6248: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e624c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2e624cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e6250: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6250u;
    SET_GPR_U32(ctx, 31, 0x2E6258u);
    ctx->pc = 0x2E6254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6250u;
            // 0x2e6254: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6258u; }
        if (ctx->pc != 0x2E6258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6258u; }
        if (ctx->pc != 0x2E6258u) { return; }
    }
    ctx->pc = 0x2E6258u;
label_2e6258:
    // 0x2e6258: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e625c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2e625cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e6260: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6260u;
    SET_GPR_U32(ctx, 31, 0x2E6268u);
    ctx->pc = 0x2E6264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6260u;
            // 0x2e6264: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6268u; }
        if (ctx->pc != 0x2E6268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6268u; }
        if (ctx->pc != 0x2E6268u) { return; }
    }
    ctx->pc = 0x2E6268u;
label_2e6268:
    // 0x2e6268: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e626c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2e626cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2e6270: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6270u;
    SET_GPR_U32(ctx, 31, 0x2E6278u);
    ctx->pc = 0x2E6274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6270u;
            // 0x2e6274: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6278u; }
        if (ctx->pc != 0x2E6278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6278u; }
        if (ctx->pc != 0x2E6278u) { return; }
    }
    ctx->pc = 0x2E6278u;
label_2e6278:
    // 0x2e6278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e627c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e627cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e6280: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6280u;
    SET_GPR_U32(ctx, 31, 0x2E6288u);
    ctx->pc = 0x2E6284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6280u;
            // 0x2e6284: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6288u; }
        if (ctx->pc != 0x2E6288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6288u; }
        if (ctx->pc != 0x2E6288u) { return; }
    }
    ctx->pc = 0x2E6288u;
label_2e6288:
    // 0x2e6288: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e628c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2e628cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2e6290: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6290u;
    SET_GPR_U32(ctx, 31, 0x2E6298u);
    ctx->pc = 0x2E6294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6290u;
            // 0x2e6294: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6298u; }
        if (ctx->pc != 0x2E6298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6298u; }
        if (ctx->pc != 0x2E6298u) { return; }
    }
    ctx->pc = 0x2E6298u;
label_2e6298:
    // 0x2e6298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e629c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2e629cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e62a0: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E62A0u;
    SET_GPR_U32(ctx, 31, 0x2E62A8u);
    ctx->pc = 0x2E62A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E62A0u;
            // 0x2e62a4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62A8u; }
        if (ctx->pc != 0x2E62A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62A8u; }
        if (ctx->pc != 0x2E62A8u) { return; }
    }
    ctx->pc = 0x2E62A8u;
label_2e62a8:
    // 0x2e62a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e62a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e62ac: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e62acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2e62b0: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E62B0u;
    SET_GPR_U32(ctx, 31, 0x2E62B8u);
    ctx->pc = 0x2E62B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E62B0u;
            // 0x2e62b4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62B8u; }
        if (ctx->pc != 0x2E62B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62B8u; }
        if (ctx->pc != 0x2E62B8u) { return; }
    }
    ctx->pc = 0x2E62B8u;
label_2e62b8:
    // 0x2e62b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e62b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e62bc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e62bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e62c0: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E62C0u;
    SET_GPR_U32(ctx, 31, 0x2E62C8u);
    ctx->pc = 0x2E62C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E62C0u;
            // 0x2e62c4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62C8u; }
        if (ctx->pc != 0x2E62C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62C8u; }
        if (ctx->pc != 0x2E62C8u) { return; }
    }
    ctx->pc = 0x2E62C8u;
label_2e62c8:
    // 0x2e62c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e62c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e62cc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2e62ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2e62d0: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E62D0u;
    SET_GPR_U32(ctx, 31, 0x2E62D8u);
    ctx->pc = 0x2E62D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E62D0u;
            // 0x2e62d4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62D8u; }
        if (ctx->pc != 0x2E62D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62D8u; }
        if (ctx->pc != 0x2E62D8u) { return; }
    }
    ctx->pc = 0x2E62D8u;
label_2e62d8:
    // 0x2e62d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e62d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e62dc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2e62dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e62e0: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E62E0u;
    SET_GPR_U32(ctx, 31, 0x2E62E8u);
    ctx->pc = 0x2E62E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E62E0u;
            // 0x2e62e4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62E8u; }
        if (ctx->pc != 0x2E62E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62E8u; }
        if (ctx->pc != 0x2E62E8u) { return; }
    }
    ctx->pc = 0x2E62E8u;
label_2e62e8:
    // 0x2e62e8: 0x2a42000b  slti        $v0, $s2, 0xB
    ctx->pc = 0x2e62e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2e62ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E62ECu;
    {
        const bool branch_taken_0x2e62ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E62F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E62ECu;
            // 0x2e62f0: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e62ec) {
            ctx->pc = 0x2E6300u;
            goto label_2e6300;
        }
    }
    ctx->pc = 0x2E62F4u;
    // 0x2e62f4: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E62F4u;
    SET_GPR_U32(ctx, 31, 0x2E62FCu);
    ctx->pc = 0x2E62F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E62F4u;
            // 0x2e62f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62FCu; }
        if (ctx->pc != 0x2E62FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62FCu; }
        if (ctx->pc != 0x2E62FCu) { return; }
    }
    ctx->pc = 0x2E62FCu;
label_2e62fc:
    // 0x2e62fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e62fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6300:
    // 0x2e6300: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2E6300u;
    {
        const bool branch_taken_0x2e6300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6300u;
            // 0x2e6304: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6300) {
            ctx->pc = 0x2E634Cu;
            goto label_2e634c;
        }
    }
    ctx->pc = 0x2E6308u;
label_2e6308:
    // 0x2e6308: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e6308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e630c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E630Cu;
    SET_GPR_U32(ctx, 31, 0x2E6314u);
    ctx->pc = 0x2E6310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E630Cu;
            // 0x2e6310: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6314u; }
        if (ctx->pc != 0x2E6314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6314u; }
        if (ctx->pc != 0x2E6314u) { return; }
    }
    ctx->pc = 0x2E6314u;
label_2e6314:
    // 0x2e6314: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6314u;
    {
        const bool branch_taken_0x2e6314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6314u;
            // 0x2e6318: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6314) {
            ctx->pc = 0x2E6324u;
            goto label_2e6324;
        }
    }
    ctx->pc = 0x2E631Cu;
    // 0x2e631c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E631Cu;
    {
        const bool branch_taken_0x2e631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E631Cu;
            // 0x2e6320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e631c) {
            ctx->pc = 0x2E6360u;
            goto label_2e6360;
        }
    }
    ctx->pc = 0x2E6324u;
label_2e6324:
    // 0x2e6324: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e6324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e6328: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2e6328u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e632c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e632cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6330: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2E6330u;
    SET_GPR_U32(ctx, 31, 0x2E6338u);
    ctx->pc = 0x2E6334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6330u;
            // 0x2e6334: 0x7c430030  sq          $v1, 0x30($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6338u; }
        if (ctx->pc != 0x2E6338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6338u; }
        if (ctx->pc != 0x2E6338u) { return; }
    }
    ctx->pc = 0x2E6338u;
label_2e6338:
    // 0x2e6338: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e6338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e633c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2e633cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e6340: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2E6340u;
    SET_GPR_U32(ctx, 31, 0x2E6348u);
    ctx->pc = 0x2E6344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6340u;
            // 0x2e6344: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6348u; }
        if (ctx->pc != 0x2E6348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6348u; }
        if (ctx->pc != 0x2E6348u) { return; }
    }
    ctx->pc = 0x2E6348u;
label_2e6348:
    // 0x2e6348: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e6348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2e634c:
    // 0x2e634c: 0x0  nop
    ctx->pc = 0x2e634cu;
    // NOP
    // 0x2e6350: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e6350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e6354: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2e6354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6358: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2E6358u;
    {
        const bool branch_taken_0x2e6358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E635Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6358u;
            // 0x2e635c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6358) {
            ctx->pc = 0x2E6308u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6308;
        }
    }
    ctx->pc = 0x2E6360u;
label_2e6360:
    // 0x2e6360: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e6360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6364: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e6364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e6368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e636c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e636cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6374: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6374u;
            // 0x2e6378: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E637Cu;
}
