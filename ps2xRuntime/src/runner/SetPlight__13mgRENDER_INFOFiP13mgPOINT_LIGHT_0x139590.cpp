#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPlight__13mgRENDER_INFOFiP13mgPOINT_LIGHT
// Address: 0x139590 - 0x139700
void SetPlight__13mgRENDER_INFOFiP13mgPOINT_LIGHT_0x139590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPlight__13mgRENDER_INFOFiP13mgPOINT_LIGHT_0x139590");
#endif

    switch (ctx->pc) {
        case 0x1395ccu: goto label_1395cc;
        case 0x139674u: goto label_139674;
        default: break;
    }

    ctx->pc = 0x139590u;

    // 0x139590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x139590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x139594: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x139594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x139598: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x139598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13959c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1395a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1395a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1395a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1395a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1395a8: 0x640004f  bltz        $s2, . + 4 + (0x4F << 2)
    ctx->pc = 0x1395A8u;
    {
        const bool branch_taken_0x1395a8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1395ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1395A8u;
            // 0x1395ac: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1395a8) {
            ctx->pc = 0x1396E8u;
            goto label_1396e8;
        }
    }
    ctx->pc = 0x1395B0u;
    // 0x1395b0: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x1395b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1395b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1395B4u;
    {
        const bool branch_taken_0x1395b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1395b4) {
            ctx->pc = 0x1395C4u;
            goto label_1395c4;
        }
    }
    ctx->pc = 0x1395BCu;
    // 0x1395bc: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1395BCu;
    {
        const bool branch_taken_0x1395bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1395C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1395BCu;
            // 0x1395c0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1395bc) {
            ctx->pc = 0x1396ECu;
            goto label_1396ec;
        }
    }
    ctx->pc = 0x1395C4u;
label_1395c4:
    // 0x1395c4: 0xc04e494  jal         func_139250
    ctx->pc = 0x1395C4u;
    SET_GPR_U32(ctx, 31, 0x1395CCu);
    ctx->pc = 0x139250u;
    if (runtime->hasFunction(0x139250u)) {
        auto targetFn = runtime->lookupFunction(0x139250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1395CCu; }
        if (ctx->pc != 0x1395CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetpLightInfo__13mgRENDER_INFOFv_0x139250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1395CCu; }
        if (ctx->pc != 0x1395CCu) { return; }
    }
    ctx->pc = 0x1395CCu;
label_1395cc:
    // 0x1395cc: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1395CCu;
    {
        const bool branch_taken_0x1395cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1395D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1395CCu;
            // 0x1395d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1395cc) {
            ctx->pc = 0x1395ECu;
            goto label_1395ec;
        }
    }
    ctx->pc = 0x1395D4u;
    // 0x1395d4: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x1395d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1395d8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1395d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1395dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1395dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1395e0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1395e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1395e4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1395E4u;
    {
        const bool branch_taken_0x1395e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1395E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1395E4u;
            // 0x1395e8: 0xac6000b0  sw          $zero, 0xB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1395e4) {
            ctx->pc = 0x1396E8u;
            goto label_1396e8;
        }
    }
    ctx->pc = 0x1395ECu;
label_1395ec:
    // 0x1395ec: 0xc6040024  lwc1        $f4, 0x24($s0)
    ctx->pc = 0x1395ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1395f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1395f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1395f4: 0x0  nop
    ctx->pc = 0x1395f4u;
    // NOP
    // 0x1395f8: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x1395f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1395fc: 0x0  nop
    ctx->pc = 0x1395fcu;
    // NOP
    // 0x139600: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x139600u;
    {
        const bool branch_taken_0x139600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x139600) {
            ctx->pc = 0x13967Cu;
            goto label_13967c;
        }
    }
    ctx->pc = 0x139608u;
    // 0x139608: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x139608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13960c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x13960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139610: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x139610u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139614: 0x0  nop
    ctx->pc = 0x139614u;
    // NOP
    // 0x139618: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x139618u;
    {
        const bool branch_taken_0x139618 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x139618) {
            ctx->pc = 0x139648u;
            goto label_139648;
        }
    }
    ctx->pc = 0x139620u;
    // 0x139620: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x139620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139624: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x139624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139628: 0x0  nop
    ctx->pc = 0x139628u;
    // NOP
    // 0x13962c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13962Cu;
    {
        const bool branch_taken_0x13962c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13962c) {
            ctx->pc = 0x13963Cu;
            goto label_13963c;
        }
    }
    ctx->pc = 0x139634u;
    // 0x139634: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x139634u;
    {
        const bool branch_taken_0x139634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139634) {
            ctx->pc = 0x139640u;
            goto label_139640;
        }
    }
    ctx->pc = 0x13963Cu;
label_13963c:
    // 0x13963c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x13963cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_139640:
    // 0x139640: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x139640u;
    {
        const bool branch_taken_0x139640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139640) {
            ctx->pc = 0x13966Cu;
            goto label_13966c;
        }
    }
    ctx->pc = 0x139648u;
label_139648:
    // 0x139648: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x139648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13964c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13964cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139650: 0x0  nop
    ctx->pc = 0x139650u;
    // NOP
    // 0x139654: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x139654u;
    {
        const bool branch_taken_0x139654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x139654) {
            ctx->pc = 0x139664u;
            goto label_139664;
        }
    }
    ctx->pc = 0x13965Cu;
    // 0x13965c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13965Cu;
    {
        const bool branch_taken_0x13965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13965Cu;
            // 0x139660: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13965c) {
            ctx->pc = 0x13966Cu;
            goto label_13966c;
        }
    }
    ctx->pc = 0x139664u;
label_139664:
    // 0x139664: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x139664u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x139668: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x139668u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_13966c:
    // 0x13966c: 0xc047cc0  jal         func_11F300
    ctx->pc = 0x13966Cu;
    SET_GPR_U32(ctx, 31, 0x139674u);
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139674u; }
        if (ctx->pc != 0x139674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139674u; }
        if (ctx->pc != 0x139674u) { return; }
    }
    ctx->pc = 0x139674u;
label_139674:
    // 0x139674: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x139674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139678: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x139678u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_13967c:
    // 0x13967c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x13967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139680: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x139680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x139684: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x139684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139688: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x139688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13968c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x13968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139690: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x139690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x139694: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x139694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139698: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x139698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13969c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13969cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1396a0: 0xe4830090  swc1        $f3, 0x90($a0)
    ctx->pc = 0x1396a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x1396a4: 0xe4820094  swc1        $f2, 0x94($a0)
    ctx->pc = 0x1396a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x1396a8: 0xe4810098  swc1        $f1, 0x98($a0)
    ctx->pc = 0x1396a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x1396ac: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x1396acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x1396b0: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1396b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1396b4: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x1396b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1396b8: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1396b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1396bc: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1396bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1396c0: 0xe48300a0  swc1        $f3, 0xA0($a0)
    ctx->pc = 0x1396c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x1396c4: 0xe48200a4  swc1        $f2, 0xA4($a0)
    ctx->pc = 0x1396c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x1396c8: 0xe48100a8  swc1        $f1, 0xA8($a0)
    ctx->pc = 0x1396c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x1396cc: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x1396ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x1396d0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1396d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1396d4: 0xe48000b0  swc1        $f0, 0xB0($a0)
    ctx->pc = 0x1396d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x1396d8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1396d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1396dc: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x1396dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x1396e0: 0xac83009c  sw          $v1, 0x9C($a0)
    ctx->pc = 0x1396e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 3));
    // 0x1396e4: 0xe48400b4  swc1        $f4, 0xB4($a0)
    ctx->pc = 0x1396e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
label_1396e8:
    // 0x1396e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1396e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1396ec:
    // 0x1396ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1396ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1396f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1396f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1396f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1396f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1396f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1396F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1396FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1396F8u;
            // 0x1396fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139700u;
}
