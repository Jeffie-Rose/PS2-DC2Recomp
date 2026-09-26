#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EncodeBinData__FPUciPUci
// Address: 0x31ceb0 - 0x31d060
void EncodeBinData__FPUciPUci_0x31ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EncodeBinData__FPUciPUci_0x31ceb0");
#endif

    switch (ctx->pc) {
        case 0x31cef4u: goto label_31cef4;
        case 0x31cf08u: goto label_31cf08;
        case 0x31cf68u: goto label_31cf68;
        case 0x31cf70u: goto label_31cf70;
        case 0x31cff0u: goto label_31cff0;
        default: break;
    }

    ctx->pc = 0x31ceb0u;

    // 0x31ceb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31ceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x31ceb4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31ceb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x31ceb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31ceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31cebc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31cec0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31cec4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31cec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31cec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31cec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31cecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ceccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31ced0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x31ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x31ced4: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x31ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x31ced8: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x31ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x31cedc: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x31cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x31cee0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31cee4: 0x2445fffe  addiu       $a1, $v0, -0x2
    ctx->pc = 0x31cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x31cee8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x31cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31ceec: 0xc0c7370  jal         func_31CDC0
    ctx->pc = 0x31CEECu;
    SET_GPR_U32(ctx, 31, 0x31CEF4u);
    ctx->pc = 0x31CDC0u;
    if (runtime->hasFunction(0x31CDC0u)) {
        auto targetFn = runtime->lookupFunction(0x31CDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CEF4u; }
        if (ctx->pc != 0x31CEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCRC__FPUci_0x31cdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CEF4u; }
        if (ctx->pc != 0x31CEF4u) { return; }
    }
    ctx->pc = 0x31CEF4u;
label_31cef4:
    // 0x31cef4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31cef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cef8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x31cef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31cefc: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x31cefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31cf00: 0xc0c7370  jal         func_31CDC0
    ctx->pc = 0x31CF00u;
    SET_GPR_U32(ctx, 31, 0x31CF08u);
    ctx->pc = 0x31CDC0u;
    if (runtime->hasFunction(0x31CDC0u)) {
        auto targetFn = runtime->lookupFunction(0x31CDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CF08u; }
        if (ctx->pc != 0x31CF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCRC__FPUci_0x31cdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CF08u; }
        if (ctx->pc != 0x31CF08u) { return; }
    }
    ctx->pc = 0x31CF08u;
label_31cf08:
    // 0x31cf08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x31cf08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf0c: 0x3a5262d3  xori        $s2, $s2, 0x62D3
    ctx->pc = 0x31cf0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)25299);
    // 0x31cf10: 0x2549026  xor         $s2, $s2, $s4
    ctx->pc = 0x31cf10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 20));
    // 0x31cf14: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x31cf14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x31cf18: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31cf1c: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x31cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x31cf20: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x31cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31cf24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31cf28: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x31cf28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31cf2c: 0x121202  srl         $v0, $s2, 8
    ctx->pc = 0x31cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x31cf30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cf34: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x31cf34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cf38: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31cf3c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x31cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31cf40: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x31cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31cf44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31cf48: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x31cf48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31cf4c: 0x3c020588  lui         $v0, 0x588
    ctx->pc = 0x31cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1416 << 16));
    // 0x31cf50: 0x34428f27  ori         $v0, $v0, 0x8F27
    ctx->pc = 0x31cf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36647);
    // 0x31cf54: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x31cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31cf58: 0xaf828688  sw          $v0, -0x7978($gp)
    ctx->pc = 0x31cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 2));
    // 0x31cf5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31cf5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31CF60u;
    {
        const bool branch_taken_0x31cf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cf60) {
            ctx->pc = 0x31CFB0u;
            goto label_31cfb0;
        }
    }
    ctx->pc = 0x31CF68u;
label_31cf68:
    // 0x31cf68: 0xc0c73a0  jal         func_31CE80
    ctx->pc = 0x31CF68u;
    SET_GPR_U32(ctx, 31, 0x31CF70u);
    ctx->pc = 0x31CE80u;
    if (runtime->hasFunction(0x31CE80u)) {
        auto targetFn = runtime->lookupFunction(0x31CE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CF70u; }
        if (ctx->pc != 0x31CF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        random__Fv_0x31ce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CF70u; }
        if (ctx->pc != 0x31CF70u) { return; }
    }
    ctx->pc = 0x31CF70u;
label_31cf70:
    // 0x31cf70: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x31cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x31cf74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cf78: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x31cf78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cf7c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x31cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31cf80: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31cf84: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x31cf84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31cf88: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x31cf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x31cf8c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x31cf8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x31cf90: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x31cf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
    // 0x31cf94: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x31cf94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x31cf98: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x31cf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x31cf9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x31cf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cfa0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x31cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31cfa4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31cfa8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x31cfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x31cfac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31cfacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31cfb0:
    // 0x31cfb0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31cfb4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x31cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x31cfb8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x31cfb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31cfbc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x31CFBCu;
    {
        const bool branch_taken_0x31cfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cfbc) {
            ctx->pc = 0x31CF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31cf68;
        }
    }
    ctx->pc = 0x31CFC4u;
    // 0x31cfc4: 0x3c02014a  lui         $v0, 0x14A
    ctx->pc = 0x31cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)330 << 16));
    // 0x31cfc8: 0x344276e0  ori         $v0, $v0, 0x76E0
    ctx->pc = 0x31cfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30432);
    // 0x31cfcc: 0xaf828688  sw          $v0, -0x7978($gp)
    ctx->pc = 0x31cfccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 2));
    // 0x31cfd0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31cfd4: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x31cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x31cfd8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x31cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31cfdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31cfe0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x31cfe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31cfe4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x31cfe4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cfe8: 0xc0c73a0  jal         func_31CE80
    ctx->pc = 0x31CFE8u;
    SET_GPR_U32(ctx, 31, 0x31CFF0u);
    ctx->pc = 0x31CE80u;
    if (runtime->hasFunction(0x31CE80u)) {
        auto targetFn = runtime->lookupFunction(0x31CE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CFF0u; }
        if (ctx->pc != 0x31CFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        random__Fv_0x31ce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CFF0u; }
        if (ctx->pc != 0x31CFF0u) { return; }
    }
    ctx->pc = 0x31CFF0u;
label_31cff0:
    // 0x31cff0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x31cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31cff4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x31cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x31cff8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x31cff8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x31cffc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31CFFCu;
    {
        const bool branch_taken_0x31cffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cffc) {
            ctx->pc = 0x31D008u;
            goto label_31d008;
        }
    }
    ctx->pc = 0x31D004u;
    // 0x31d004: 0x1cd  break       0, 7
    ctx->pc = 0x31d004u;
    runtime->handleBreak(rdram, ctx);
label_31d008:
    // 0x31d008: 0x9810  mfhi        $s3
    ctx->pc = 0x31d008u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x31d00c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x31d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31d010: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x31d010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x31d014: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x31d014u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31d018: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x31d018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31d01c: 0x2464fffe  addiu       $a0, $v1, -0x2
    ctx->pc = 0x31d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x31d020: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x31d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31d024: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31d024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31d028: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x31d028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x31d02c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x31d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31d030: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x31d030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x31d034: 0xa0750000  sb          $s5, 0x0($v1)
    ctx->pc = 0x31d034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x31d038: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31d038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31d03c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31d03cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31d040: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31d040u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d044: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31d044u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d048: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31d048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d04c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31d04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d050: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31d050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d054: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x31d054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x31d058: 0x3e00008  jr          $ra
    ctx->pc = 0x31D058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D060u;
}
