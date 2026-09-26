#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuAreaBoardNameStep__Fv
// Address: 0x2348d0 - 0x234bcc
void MenuAreaBoardNameStep__Fv_0x2348d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuAreaBoardNameStep__Fv_0x2348d0");
#endif

    switch (ctx->pc) {
        case 0x234918u: goto label_234918;
        case 0x234928u: goto label_234928;
        case 0x234934u: goto label_234934;
        case 0x234948u: goto label_234948;
        case 0x234998u: goto label_234998;
        case 0x2349b0u: goto label_2349b0;
        case 0x2349d0u: goto label_2349d0;
        case 0x234a38u: goto label_234a38;
        case 0x234a64u: goto label_234a64;
        case 0x234a78u: goto label_234a78;
        case 0x234a8cu: goto label_234a8c;
        case 0x234aa0u: goto label_234aa0;
        case 0x234ab4u: goto label_234ab4;
        case 0x234ad0u: goto label_234ad0;
        case 0x234b00u: goto label_234b00;
        case 0x234b14u: goto label_234b14;
        case 0x234b38u: goto label_234b38;
        case 0x234b4cu: goto label_234b4c;
        case 0x234b84u: goto label_234b84;
        case 0x234b98u: goto label_234b98;
        case 0x234ba0u: goto label_234ba0;
        case 0x234bb4u: goto label_234bb4;
        default: break;
    }

    ctx->pc = 0x2348d0u;

    // 0x2348d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2348d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2348d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2348d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2348d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2348d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2348dc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2348dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2348e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2348e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2348e4: 0x8f8394dc  lw          $v1, -0x6B24($gp)
    ctx->pc = 0x2348e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939868)));
    // 0x2348e8: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2348E8u;
    {
        const bool branch_taken_0x2348e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2348e8) {
            ctx->pc = 0x234BB4u;
            goto label_234bb4;
        }
    }
    ctx->pc = 0x2348F0u;
    // 0x2348f0: 0xdf829550  ld          $v0, -0x6AB0($gp)
    ctx->pc = 0x2348f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939984)));
    // 0x2348f4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2348f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2348f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2348f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2348fc: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2348fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x234900: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x234900u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x234904: 0x8f8294e4  lw          $v0, -0x6B1C($gp)
    ctx->pc = 0x234904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939876)));
    // 0x234908: 0x8c30ca44  lw          $s0, -0x35BC($at)
    ctx->pc = 0x234908u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
    // 0x23490c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x23490cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x234910: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x234910u;
    SET_GPR_U32(ctx, 31, 0x234918u);
    ctx->pc = 0x234914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234910u;
            // 0x234914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234918u; }
        if (ctx->pc != 0x234918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234918u; }
        if (ctx->pc != 0x234918u) { return; }
    }
    ctx->pc = 0x234918u;
label_234918:
    // 0x234918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23491c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x23491cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x234920: 0xc087720  jal         func_21DC80
    ctx->pc = 0x234920u;
    SET_GPR_U32(ctx, 31, 0x234928u);
    ctx->pc = 0x234924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234920u;
            // 0x234924: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234928u; }
        if (ctx->pc != 0x234928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234928u; }
        if (ctx->pc != 0x234928u) { return; }
    }
    ctx->pc = 0x234928u;
label_234928:
    // 0x234928: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x234928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23492c: 0xc05484c  jal         func_152130
    ctx->pc = 0x23492Cu;
    SET_GPR_U32(ctx, 31, 0x234934u);
    ctx->pc = 0x234930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23492Cu;
            // 0x234930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152130u;
    if (runtime->hasFunction(0x152130u)) {
        auto targetFn = runtime->lookupFunction(0x152130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234934u; }
        if (ctx->pc != 0x234934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStrWidth__6ClsMesFPc_0x152130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234934u; }
        if (ctx->pc != 0x234934u) { return; }
    }
    ctx->pc = 0x234934u;
label_234934:
    // 0x234934: 0xdf829558  ld          $v0, -0x6AA8($gp)
    ctx->pc = 0x234934u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939992)));
    // 0x234938: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x234938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x23493c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x23493cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x234940: 0xc08a26c  jal         func_2289B0
    ctx->pc = 0x234940u;
    SET_GPR_U32(ctx, 31, 0x234948u);
    ctx->pc = 0x234944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234940u;
            // 0x234944: 0x8f8494dc  lw          $a0, -0x6B24($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2289B0u;
    if (runtime->hasFunction(0x2289B0u)) {
        auto targetFn = runtime->lookupFunction(0x2289B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234948u; }
        if (ctx->pc != 0x234948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextMovePos__16CMenuPosDataFormFPi_0x2289b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234948u; }
        if (ctx->pc != 0x234948u) { return; }
    }
    ctx->pc = 0x234948u;
label_234948:
    // 0x234948: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x234948u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x23494c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x23494cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234950: 0x24e70a60  addiu       $a3, $a3, 0xA60
    ctx->pc = 0x234950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2656));
    // 0x234954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234958: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x234958u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23495c: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x23495cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234960: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x234960u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x234964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234968: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x234968u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x23496c: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x23496cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x234970: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x234970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x234974: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x234974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x234978: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x234978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x23497c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x23497cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x234980: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x234980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x234984: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x234984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x234988: 0x24470007  addiu       $a3, $v0, 0x7
    ctx->pc = 0x234988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x23498c: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x23498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x234990: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x234990u;
    SET_GPR_U32(ctx, 31, 0x234998u);
    ctx->pc = 0x234994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234990u;
            // 0x234994: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234998u; }
        if (ctx->pc != 0x234998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234998u; }
        if (ctx->pc != 0x234998u) { return; }
    }
    ctx->pc = 0x234998u;
label_234998:
    // 0x234998: 0x8f9094e0  lw          $s0, -0x6B20($gp)
    ctx->pc = 0x234998u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x23499c: 0x12000085  beqz        $s0, . + 4 + (0x85 << 2)
    ctx->pc = 0x23499Cu;
    {
        const bool branch_taken_0x23499c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23499c) {
            ctx->pc = 0x234BB4u;
            goto label_234bb4;
        }
    }
    ctx->pc = 0x2349A4u;
    // 0x2349a4: 0xc79594e8  lwc1        $f21, -0x6B18($gp)
    ctx->pc = 0x2349a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2349a8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2349A8u;
    SET_GPR_U32(ctx, 31, 0x2349B0u);
    ctx->pc = 0x2349ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2349A8u;
            // 0x2349ac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2349B0u; }
        if (ctx->pc != 0x2349B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2349B0u; }
        if (ctx->pc != 0x2349B0u) { return; }
    }
    ctx->pc = 0x2349B0u;
label_2349b0:
    // 0x2349b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2349b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2349b4: 0x0  nop
    ctx->pc = 0x2349b4u;
    // NOP
    // 0x2349b8: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x2349b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2349bc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2349bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2349c0: 0x4614a841  sub.s       $f1, $f21, $f20
    ctx->pc = 0x2349c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x2349c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2349c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2349c8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2349C8u;
    SET_GPR_U32(ctx, 31, 0x2349D0u);
    ctx->pc = 0x2349CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2349C8u;
            // 0x2349cc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2349D0u; }
        if (ctx->pc != 0x2349D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2349D0u; }
        if (ctx->pc != 0x2349D0u) { return; }
    }
    ctx->pc = 0x2349D0u;
label_2349d0:
    // 0x2349d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2349d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2349d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2349d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2349d8: 0x0  nop
    ctx->pc = 0x2349d8u;
    // NOP
    // 0x2349dc: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x2349dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x2349e0: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2349e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2349e4: 0x0  nop
    ctx->pc = 0x2349e4u;
    // NOP
    // 0x2349e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2349E8u;
    {
        const bool branch_taken_0x2349e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2349ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2349E8u;
            // 0x2349ec: 0x3c02426c  lui         $v0, 0x426C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17004 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349e8) {
            ctx->pc = 0x2349F4u;
            goto label_2349f4;
        }
    }
    ctx->pc = 0x2349F0u;
    // 0x2349f0: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x2349f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
label_2349f4:
    // 0x2349f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2349f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2349f8: 0x0  nop
    ctx->pc = 0x2349f8u;
    // NOP
    // 0x2349fc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2349fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234a00: 0x0  nop
    ctx->pc = 0x234a00u;
    // NOP
    // 0x234a04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x234A04u;
    {
        const bool branch_taken_0x234a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x234a04) {
            ctx->pc = 0x234A10u;
            goto label_234a10;
        }
    }
    ctx->pc = 0x234A0Cu;
    // 0x234a0c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x234a0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_234a10:
    // 0x234a10: 0x8f8294a8  lw          $v0, -0x6B58($gp)
    ctx->pc = 0x234a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939816)));
    // 0x234a14: 0x8c421a14  lw          $v0, 0x1A14($v0)
    ctx->pc = 0x234a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6676)));
    // 0x234a18: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x234a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234a1c: 0x28c12710  slti        $at, $a2, 0x2710
    ctx->pc = 0x234a1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x234a20: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x234A20u;
    {
        const bool branch_taken_0x234a20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x234A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234A20u;
            // 0x234a24: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a20) {
            ctx->pc = 0x234A2Cu;
            goto label_234a2c;
        }
    }
    ctx->pc = 0x234A28u;
    // 0x234a28: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x234a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_234a2c:
    // 0x234a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234a30: 0xc089728  jal         func_225CA0
    ctx->pc = 0x234A30u;
    SET_GPR_U32(ctx, 31, 0x234A38u);
    ctx->pc = 0x234A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234A30u;
            // 0x234a34: 0x24a5a858  addiu       $a1, $a1, -0x57A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234A38u; }
        if (ctx->pc != 0x234A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234A38u; }
        if (ctx->pc != 0x234A38u) { return; }
    }
    ctx->pc = 0x234A38u;
label_234a38:
    // 0x234a38: 0x878394c4  lh          $v1, -0x6B3C($gp)
    ctx->pc = 0x234a38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939844)));
    // 0x234a3c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x234a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x234a40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234A40u;
    {
        const bool branch_taken_0x234a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x234A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234A40u;
            // 0x234a44: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a40) {
            ctx->pc = 0x234A50u;
            goto label_234a50;
        }
    }
    ctx->pc = 0x234A48u;
    // 0x234a48: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x234A48u;
    {
        const bool branch_taken_0x234a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x234a48) {
            ctx->pc = 0x234ABCu;
            goto label_234abc;
        }
    }
    ctx->pc = 0x234A50u;
label_234a50:
    // 0x234a50: 0x8f8494e0  lw          $a0, -0x6B20($gp)
    ctx->pc = 0x234a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x234a54: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234a58: 0x24a5a860  addiu       $a1, $a1, -0x57A0
    ctx->pc = 0x234a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944864));
    // 0x234a5c: 0xc08968c  jal         func_225A30
    ctx->pc = 0x234A5Cu;
    SET_GPR_U32(ctx, 31, 0x234A64u);
    ctx->pc = 0x234A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234A5Cu;
            // 0x234a60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234A64u; }
        if (ctx->pc != 0x234A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234A64u; }
        if (ctx->pc != 0x234A64u) { return; }
    }
    ctx->pc = 0x234A64u;
label_234a64:
    // 0x234a64: 0x8f8494e0  lw          $a0, -0x6B20($gp)
    ctx->pc = 0x234a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x234a68: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234a6c: 0x24a5a868  addiu       $a1, $a1, -0x5798
    ctx->pc = 0x234a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944872));
    // 0x234a70: 0xc08968c  jal         func_225A30
    ctx->pc = 0x234A70u;
    SET_GPR_U32(ctx, 31, 0x234A78u);
    ctx->pc = 0x234A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234A70u;
            // 0x234a74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234A78u; }
        if (ctx->pc != 0x234A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234A78u; }
        if (ctx->pc != 0x234A78u) { return; }
    }
    ctx->pc = 0x234A78u;
label_234a78:
    // 0x234a78: 0x8f8494e0  lw          $a0, -0x6B20($gp)
    ctx->pc = 0x234a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x234a7c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234a80: 0x24a5a870  addiu       $a1, $a1, -0x5790
    ctx->pc = 0x234a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944880));
    // 0x234a84: 0xc08968c  jal         func_225A30
    ctx->pc = 0x234A84u;
    SET_GPR_U32(ctx, 31, 0x234A8Cu);
    ctx->pc = 0x234A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234A84u;
            // 0x234a88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234A8Cu; }
        if (ctx->pc != 0x234A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234A8Cu; }
        if (ctx->pc != 0x234A8Cu) { return; }
    }
    ctx->pc = 0x234A8Cu;
label_234a8c:
    // 0x234a8c: 0x8f8494e0  lw          $a0, -0x6B20($gp)
    ctx->pc = 0x234a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x234a90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234a94: 0x24a5a878  addiu       $a1, $a1, -0x5788
    ctx->pc = 0x234a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944888));
    // 0x234a98: 0xc08968c  jal         func_225A30
    ctx->pc = 0x234A98u;
    SET_GPR_U32(ctx, 31, 0x234AA0u);
    ctx->pc = 0x234A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234A98u;
            // 0x234a9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234AA0u; }
        if (ctx->pc != 0x234AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234AA0u; }
        if (ctx->pc != 0x234AA0u) { return; }
    }
    ctx->pc = 0x234AA0u;
label_234aa0:
    // 0x234aa0: 0x8f8494e0  lw          $a0, -0x6B20($gp)
    ctx->pc = 0x234aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x234aa4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234aa8: 0x24a5a880  addiu       $a1, $a1, -0x5780
    ctx->pc = 0x234aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944896));
    // 0x234aac: 0xc08968c  jal         func_225A30
    ctx->pc = 0x234AACu;
    SET_GPR_U32(ctx, 31, 0x234AB4u);
    ctx->pc = 0x234AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234AACu;
            // 0x234ab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234AB4u; }
        if (ctx->pc != 0x234AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234AB4u; }
        if (ctx->pc != 0x234AB4u) { return; }
    }
    ctx->pc = 0x234AB4u;
label_234ab4:
    // 0x234ab4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x234AB4u;
    {
        const bool branch_taken_0x234ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234AB4u;
            // 0x234ab8: 0x8f838ad0  lw          $v1, -0x7530($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ab4) {
            ctx->pc = 0x234B50u;
            goto label_234b50;
        }
    }
    ctx->pc = 0x234ABCu;
label_234abc:
    // 0x234abc: 0x8f8494e0  lw          $a0, -0x6B20($gp)
    ctx->pc = 0x234abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x234ac0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234ac4: 0x24a5a888  addiu       $a1, $a1, -0x5778
    ctx->pc = 0x234ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944904));
    // 0x234ac8: 0xc08968c  jal         func_225A30
    ctx->pc = 0x234AC8u;
    SET_GPR_U32(ctx, 31, 0x234AD0u);
    ctx->pc = 0x234ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234AC8u;
            // 0x234acc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234AD0u; }
        if (ctx->pc != 0x234AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234AD0u; }
        if (ctx->pc != 0x234AD0u) { return; }
    }
    ctx->pc = 0x234AD0u;
label_234ad0:
    // 0x234ad0: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x234ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x234ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234ad8: 0x0  nop
    ctx->pc = 0x234ad8u;
    // NOP
    // 0x234adc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x234adcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234ae0: 0x0  nop
    ctx->pc = 0x234ae0u;
    // NOP
    // 0x234ae4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x234AE4u;
    {
        const bool branch_taken_0x234ae4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x234ae4) {
            ctx->pc = 0x234B24u;
            goto label_234b24;
        }
    }
    ctx->pc = 0x234AECu;
    // 0x234aec: 0x8f8494e0  lw          $a0, -0x6B20($gp)
    ctx->pc = 0x234aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x234af0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234af4: 0x24a5a860  addiu       $a1, $a1, -0x57A0
    ctx->pc = 0x234af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944864));
    // 0x234af8: 0xc08968c  jal         func_225A30
    ctx->pc = 0x234AF8u;
    SET_GPR_U32(ctx, 31, 0x234B00u);
    ctx->pc = 0x234AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234AF8u;
            // 0x234afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B00u; }
        if (ctx->pc != 0x234B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B00u; }
        if (ctx->pc != 0x234B00u) { return; }
    }
    ctx->pc = 0x234B00u;
label_234b00:
    // 0x234b00: 0x8f8494e0  lw          $a0, -0x6B20($gp)
    ctx->pc = 0x234b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x234b04: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234b08: 0x24a5a868  addiu       $a1, $a1, -0x5798
    ctx->pc = 0x234b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944872));
    // 0x234b0c: 0xc08968c  jal         func_225A30
    ctx->pc = 0x234B0Cu;
    SET_GPR_U32(ctx, 31, 0x234B14u);
    ctx->pc = 0x234B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234B0Cu;
            // 0x234b10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B14u; }
        if (ctx->pc != 0x234B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B14u; }
        if (ctx->pc != 0x234B14u) { return; }
    }
    ctx->pc = 0x234B14u;
label_234b14:
    // 0x234b14: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x234b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x234b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234b1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x234B1Cu;
    {
        const bool branch_taken_0x234b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234B1Cu;
            // 0x234b20: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b1c) {
            ctx->pc = 0x234B4Cu;
            goto label_234b4c;
        }
    }
    ctx->pc = 0x234B24u;
label_234b24:
    // 0x234b24: 0x8f8494e0  lw          $a0, -0x6B20($gp)
    ctx->pc = 0x234b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x234b28: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234b2c: 0x24a5a860  addiu       $a1, $a1, -0x57A0
    ctx->pc = 0x234b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944864));
    // 0x234b30: 0xc08968c  jal         func_225A30
    ctx->pc = 0x234B30u;
    SET_GPR_U32(ctx, 31, 0x234B38u);
    ctx->pc = 0x234B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234B30u;
            // 0x234b34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B38u; }
        if (ctx->pc != 0x234B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B38u; }
        if (ctx->pc != 0x234B38u) { return; }
    }
    ctx->pc = 0x234B38u;
label_234b38:
    // 0x234b38: 0x8f8494e0  lw          $a0, -0x6B20($gp)
    ctx->pc = 0x234b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x234b3c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234b40: 0x24a5a868  addiu       $a1, $a1, -0x5798
    ctx->pc = 0x234b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944872));
    // 0x234b44: 0xc08968c  jal         func_225A30
    ctx->pc = 0x234B44u;
    SET_GPR_U32(ctx, 31, 0x234B4Cu);
    ctx->pc = 0x234B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234B44u;
            // 0x234b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B4Cu; }
        if (ctx->pc != 0x234B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B4Cu; }
        if (ctx->pc != 0x234B4Cu) { return; }
    }
    ctx->pc = 0x234B4Cu;
label_234b4c:
    // 0x234b4c: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x234b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_234b50:
    // 0x234b50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234b54: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x234B54u;
    {
        const bool branch_taken_0x234b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x234B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234B54u;
            // 0x234b58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b54) {
            ctx->pc = 0x234B7Cu;
            goto label_234b7c;
        }
    }
    ctx->pc = 0x234B5Cu;
    // 0x234b5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x234b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234b60: 0x0  nop
    ctx->pc = 0x234b60u;
    // NOP
    // 0x234b64: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x234b64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234b68: 0x0  nop
    ctx->pc = 0x234b68u;
    // NOP
    // 0x234b6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x234B6Cu;
    {
        const bool branch_taken_0x234b6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x234B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234B6Cu;
            // 0x234b70: 0x3c024140  lui         $v0, 0x4140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b6c) {
            ctx->pc = 0x234B78u;
            goto label_234b78;
        }
    }
    ctx->pc = 0x234B74u;
    // 0x234b74: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x234b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_234b78:
    // 0x234b78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x234b78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_234b7c:
    // 0x234b7c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x234B7Cu;
    SET_GPR_U32(ctx, 31, 0x234B84u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B84u; }
        if (ctx->pc != 0x234B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B84u; }
        if (ctx->pc != 0x234B84u) { return; }
    }
    ctx->pc = 0x234B84u;
label_234b84:
    // 0x234b84: 0x8f8494e0  lw          $a0, -0x6B20($gp)
    ctx->pc = 0x234b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x234b88: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234b8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x234b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234b90: 0xc089728  jal         func_225CA0
    ctx->pc = 0x234B90u;
    SET_GPR_U32(ctx, 31, 0x234B98u);
    ctx->pc = 0x234B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234B90u;
            // 0x234b94: 0x24a5a870  addiu       $a1, $a1, -0x5790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B98u; }
        if (ctx->pc != 0x234B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B98u; }
        if (ctx->pc != 0x234B98u) { return; }
    }
    ctx->pc = 0x234B98u;
label_234b98:
    // 0x234b98: 0xc0a248c  jal         func_289230
    ctx->pc = 0x234B98u;
    SET_GPR_U32(ctx, 31, 0x234BA0u);
    ctx->pc = 0x234B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234B98u;
            // 0x234b9c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234BA0u; }
        if (ctx->pc != 0x234BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234BA0u; }
        if (ctx->pc != 0x234BA0u) { return; }
    }
    ctx->pc = 0x234BA0u;
label_234ba0:
    // 0x234ba0: 0x8f8494e0  lw          $a0, -0x6B20($gp)
    ctx->pc = 0x234ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x234ba4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234ba8: 0x24a5a878  addiu       $a1, $a1, -0x5788
    ctx->pc = 0x234ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944888));
    // 0x234bac: 0xc089728  jal         func_225CA0
    ctx->pc = 0x234BACu;
    SET_GPR_U32(ctx, 31, 0x234BB4u);
    ctx->pc = 0x234BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234BACu;
            // 0x234bb0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234BB4u; }
        if (ctx->pc != 0x234BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234BB4u; }
        if (ctx->pc != 0x234BB4u) { return; }
    }
    ctx->pc = 0x234BB4u;
label_234bb4:
    // 0x234bb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234bb8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x234bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x234bbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x234bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234bc0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x234bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x234bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x234BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234BC4u;
            // 0x234bc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234BCCu;
}
