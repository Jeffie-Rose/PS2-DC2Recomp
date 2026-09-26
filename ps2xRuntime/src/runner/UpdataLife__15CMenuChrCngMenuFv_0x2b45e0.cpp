#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdataLife__15CMenuChrCngMenuFv
// Address: 0x2b45e0 - 0x2b4758
void UpdataLife__15CMenuChrCngMenuFv_0x2b45e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdataLife__15CMenuChrCngMenuFv_0x2b45e0");
#endif

    switch (ctx->pc) {
        case 0x2b463cu: goto label_2b463c;
        case 0x2b4650u: goto label_2b4650;
        case 0x2b466cu: goto label_2b466c;
        case 0x2b4678u: goto label_2b4678;
        case 0x2b4688u: goto label_2b4688;
        case 0x2b46a8u: goto label_2b46a8;
        case 0x2b46b8u: goto label_2b46b8;
        case 0x2b46f8u: goto label_2b46f8;
        case 0x2b4714u: goto label_2b4714;
        case 0x2b4730u: goto label_2b4730;
        default: break;
    }

    ctx->pc = 0x2b45e0u;

    // 0x2b45e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b45e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b45e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b45e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b45e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b45e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2b45ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2b45ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2b45f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b45f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2b45f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b45f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b45f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b45f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b45fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b45fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b4600: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b4600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4604: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b4604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b4608: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b4608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b460c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b460cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b4610: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b4610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4614: 0x8c22d8c0  lw          $v0, -0x2740($at)
    ctx->pc = 0x2b4614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
    // 0x2b4618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b461c: 0xac820150  sw          $v0, 0x150($a0)
    ctx->pc = 0x2b461cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
    // 0x2b4620: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b4620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b4624: 0x8c22d8c4  lw          $v0, -0x273C($at)
    ctx->pc = 0x2b4624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957252)));
    // 0x2b4628: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x2b4628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x2b462c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b462cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b4630: 0x8c22d8c8  lw          $v0, -0x2738($at)
    ctx->pc = 0x2b4630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x2b4634: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2b4634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b4638: 0xac820158  sw          $v0, 0x158($a0)
    ctx->pc = 0x2b4638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
label_2b463c:
    // 0x2b463c: 0x212b021  addu        $s6, $s0, $s2
    ctx->pc = 0x2b463cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2b4640: 0x8ec20150  lw          $v0, 0x150($s6)
    ctx->pc = 0x2b4640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 336)));
    // 0x2b4644: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x2b4644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b4648: 0xc0945c8  jal         func_251720
    ctx->pc = 0x2B4648u;
    SET_GPR_U32(ctx, 31, 0x2B4650u);
    ctx->pc = 0x2B464Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4648u;
            // 0x2b464c: 0x26d40150  addiu       $s4, $s6, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4650u; }
        if (ctx->pc != 0x2B4650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4650u; }
        if (ctx->pc != 0x2B4650u) { return; }
    }
    ctx->pc = 0x2B4650u;
label_2b4650:
    // 0x2b4650: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b4650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4654: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2b4654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2b4658: 0x244247a0  addiu       $v0, $v0, 0x47A0
    ctx->pc = 0x2b4658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18336));
    // 0x2b465c: 0x53a821  addu        $s5, $v0, $s3
    ctx->pc = 0x2b465cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2b4660: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2b4660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2b4664: 0xc089728  jal         func_225CA0
    ctx->pc = 0x2B4664u;
    SET_GPR_U32(ctx, 31, 0x2B466Cu);
    ctx->pc = 0x2B4668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4664u;
            // 0x2b4668: 0x8e040140  lw          $a0, 0x140($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B466Cu; }
        if (ctx->pc != 0x2B466Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B466Cu; }
        if (ctx->pc != 0x2B466Cu) { return; }
    }
    ctx->pc = 0x2B466Cu;
label_2b466c:
    // 0x2b466c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2b466cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b4670: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2B4670u;
    SET_GPR_U32(ctx, 31, 0x2B4678u);
    ctx->pc = 0x2B4674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4670u;
            // 0x2b4674: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4678u; }
        if (ctx->pc != 0x2B4678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4678u; }
        if (ctx->pc != 0x2B4678u) { return; }
    }
    ctx->pc = 0x2B4678u;
label_2b4678:
    // 0x2b4678: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x2b4678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2b467c: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x2b467cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2b4680: 0xc089728  jal         func_225CA0
    ctx->pc = 0x2B4680u;
    SET_GPR_U32(ctx, 31, 0x2B4688u);
    ctx->pc = 0x2B4684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4680u;
            // 0x2b4684: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4688u; }
        if (ctx->pc != 0x2B4688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4688u; }
        if (ctx->pc != 0x2B4688u) { return; }
    }
    ctx->pc = 0x2B4688u;
label_2b4688:
    // 0x2b4688: 0x8ec30144  lw          $v1, 0x144($s6)
    ctx->pc = 0x2b4688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 324)));
    // 0x2b468c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2B468Cu;
    {
        const bool branch_taken_0x2b468c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B468Cu;
            // 0x2b4690: 0x26d50144  addiu       $s5, $s6, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 324));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b468c) {
            ctx->pc = 0x2B46C8u;
            goto label_2b46c8;
        }
    }
    ctx->pc = 0x2B4694u;
    // 0x2b4694: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2b4694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b4698: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B4698u;
    {
        const bool branch_taken_0x2b4698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4698) {
            ctx->pc = 0x2B46C8u;
            goto label_2b46c8;
        }
    }
    ctx->pc = 0x2B46A0u;
    // 0x2b46a0: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x2B46A0u;
    SET_GPR_U32(ctx, 31, 0x2B46A8u);
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B46A8u; }
        if (ctx->pc != 0x2B46A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B46A8u; }
        if (ctx->pc != 0x2B46A8u) { return; }
    }
    ctx->pc = 0x2B46A8u;
label_2b46a8:
    // 0x2b46a8: 0x3c024284  lui         $v0, 0x4284
    ctx->pc = 0x2b46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17028 << 16));
    // 0x2b46ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b46acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b46b0: 0xc0945c8  jal         func_251720
    ctx->pc = 0x2B46B0u;
    SET_GPR_U32(ctx, 31, 0x2B46B8u);
    ctx->pc = 0x2B46B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B46B0u;
            // 0x2b46b4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B46B8u; }
        if (ctx->pc != 0x2B46B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B46B8u; }
        if (ctx->pc != 0x2B46B8u) { return; }
    }
    ctx->pc = 0x2B46B8u;
label_2b46b8:
    // 0x2b46b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b46b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b46bc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2b46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2b46c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b46c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b46c4: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2b46c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_2b46c8:
    // 0x2b46c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b46c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b46cc: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x2b46ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b46d0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2b46d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2b46d4: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2B46D4u;
    {
        const bool branch_taken_0x2b46d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B46D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B46D4u;
            // 0x2b46d8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46d4) {
            ctx->pc = 0x2B463Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b463c;
        }
    }
    ctx->pc = 0x2B46DCu;
    // 0x2b46dc: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x2b46dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2b46e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b46e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b46e4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B46E4u;
    {
        const bool branch_taken_0x2b46e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B46E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B46E4u;
            // 0x2b46e8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46e4) {
            ctx->pc = 0x2B46F8u;
            goto label_2b46f8;
        }
    }
    ctx->pc = 0x2B46ECu;
    // 0x2b46ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b46ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b46f0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2B46F0u;
    SET_GPR_U32(ctx, 31, 0x2B46F8u);
    ctx->pc = 0x2B46F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B46F0u;
            // 0x2b46f4: 0x24a5ed78  addiu       $a1, $a1, -0x1288 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B46F8u; }
        if (ctx->pc != 0x2B46F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B46F8u; }
        if (ctx->pc != 0x2B46F8u) { return; }
    }
    ctx->pc = 0x2B46F8u;
label_2b46f8:
    // 0x2b46f8: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x2b46f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2b46fc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2b46fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2b4700: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4700u;
    {
        const bool branch_taken_0x2b4700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4700u;
            // 0x2b4704: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4700) {
            ctx->pc = 0x2B4714u;
            goto label_2b4714;
        }
    }
    ctx->pc = 0x2B4708u;
    // 0x2b4708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b470c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2B470Cu;
    SET_GPR_U32(ctx, 31, 0x2B4714u);
    ctx->pc = 0x2B4710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B470Cu;
            // 0x2b4710: 0x24a5ed88  addiu       $a1, $a1, -0x1278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4714u; }
        if (ctx->pc != 0x2B4714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4714u; }
        if (ctx->pc != 0x2B4714u) { return; }
    }
    ctx->pc = 0x2B4714u;
label_2b4714:
    // 0x2b4714: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x2b4714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2b4718: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2b4718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2b471c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B471Cu;
    {
        const bool branch_taken_0x2b471c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B471Cu;
            // 0x2b4720: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b471c) {
            ctx->pc = 0x2B4730u;
            goto label_2b4730;
        }
    }
    ctx->pc = 0x2B4724u;
    // 0x2b4724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4728: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2B4728u;
    SET_GPR_U32(ctx, 31, 0x2B4730u);
    ctx->pc = 0x2B472Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4728u;
            // 0x2b472c: 0x24a5ed98  addiu       $a1, $a1, -0x1268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4730u; }
        if (ctx->pc != 0x2B4730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4730u; }
        if (ctx->pc != 0x2B4730u) { return; }
    }
    ctx->pc = 0x2B4730u;
label_2b4730:
    // 0x2b4730: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b4730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b4734: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2b4734u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b4738: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b4738u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b473c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b473cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4740: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b4740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4744: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b4744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b4748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b474c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b474cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4750: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4750u;
            // 0x2b4754: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B4758u;
}
