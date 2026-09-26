#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTimeLightingRatio__4CMapFPf
// Address: 0x1610f0 - 0x1612b0
void GetTimeLightingRatio__4CMapFPf_0x1610f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTimeLightingRatio__4CMapFPf_0x1610f0");
#endif

    switch (ctx->pc) {
        case 0x161128u: goto label_161128;
        case 0x161138u: goto label_161138;
        case 0x161158u: goto label_161158;
        case 0x16119cu: goto label_16119c;
        case 0x1611e8u: goto label_1611e8;
        default: break;
    }

    ctx->pc = 0x1610f0u;

    // 0x1610f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1610f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1610f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1610f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1610f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1610f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1610fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1610fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x161100: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x161100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x161104: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x161104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161108: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16110c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16110cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x161110: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x161110u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x161114: 0x8c9000d0  lw          $s0, 0xD0($a0)
    ctx->pc = 0x161114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x161118: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161118u;
    {
        const bool branch_taken_0x161118 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x16111Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161118u;
            // 0x16111c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161118) {
            ctx->pc = 0x161130u;
            goto label_161130;
        }
    }
    ctx->pc = 0x161120u;
    // 0x161120: 0xc05839c  jal         func_160E70
    ctx->pc = 0x161120u;
    SET_GPR_U32(ctx, 31, 0x161128u);
    ctx->pc = 0x160E70u;
    if (runtime->hasFunction(0x160E70u)) {
        auto targetFn = runtime->lookupFunction(0x160E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161128u; }
        if (ctx->pc != 0x161128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightingRatio__4CMapFPf_0x160e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161128u; }
        if (ctx->pc != 0x161128u) { return; }
    }
    ctx->pc = 0x161128u;
label_161128:
    // 0x161128: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x161128u;
    {
        const bool branch_taken_0x161128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161128u;
            // 0x16112c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161128) {
            ctx->pc = 0x161290u;
            goto label_161290;
        }
    }
    ctx->pc = 0x161130u;
label_161130:
    // 0x161130: 0xc05834c  jal         func_160D30
    ctx->pc = 0x161130u;
    SET_GPR_U32(ctx, 31, 0x161138u);
    ctx->pc = 0x160D30u;
    if (runtime->hasFunction(0x160D30u)) {
        auto targetFn = runtime->lookupFunction(0x160D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161138u; }
        if (ctx->pc != 0x161138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTime__4CMapFv_0x160d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161138u; }
        if (ctx->pc != 0x161138u) { return; }
    }
    ctx->pc = 0x161138u;
label_161138:
    // 0x161138: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x161138u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16113c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16113cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161140: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x161140u;
    {
        const bool branch_taken_0x161140 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x161144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161140u;
            // 0x161144: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161140) {
            ctx->pc = 0x1611BCu;
            goto label_1611bc;
        }
    }
    ctx->pc = 0x161148u;
    // 0x161148: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x161148u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x16114c: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x16114Cu;
    {
        const bool branch_taken_0x16114c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x161150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16114Cu;
            // 0x161150: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16114c) {
            ctx->pc = 0x16118Cu;
            goto label_16118c;
        }
    }
    ctx->pc = 0x161154u;
    // 0x161154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161158:
    // 0x161158: 0x2253021  addu        $a2, $s1, $a1
    ctx->pc = 0x161158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x16115c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x16115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x161160: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x161160u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x161164: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x161164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x161168: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x161168u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x16116c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x16116cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x161170: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x161170u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x161174: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x161174u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x161178: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x161178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x16117c: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x16117cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x161180: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x161180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x161184: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x161184u;
    {
        const bool branch_taken_0x161184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161184u;
            // 0x161188: 0xacc0001c  sw          $zero, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161184) {
            ctx->pc = 0x161158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161158;
        }
    }
    ctx->pc = 0x16118Cu;
label_16118c:
    // 0x16118c: 0x0  nop
    ctx->pc = 0x16118cu;
    // NOP
    // 0x161190: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x161190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x161194: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x161194u;
    {
        const bool branch_taken_0x161194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x161198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161194u;
            // 0x161198: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161194) {
            ctx->pc = 0x1611BCu;
            goto label_1611bc;
        }
    }
    ctx->pc = 0x16119Cu;
label_16119c:
    // 0x16119c: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x16119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1611a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1611a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1611a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1611a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1611a8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1611a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1611ac: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x1611acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1611b0: 0x0  nop
    ctx->pc = 0x1611b0u;
    // NOP
    // 0x1611b4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1611B4u;
    {
        const bool branch_taken_0x1611b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1611b4) {
            ctx->pc = 0x16119Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16119c;
        }
    }
    ctx->pc = 0x1611BCu;
label_1611bc:
    // 0x1611bc: 0x0  nop
    ctx->pc = 0x1611bcu;
    // NOP
    // 0x1611c0: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x1611c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1611c4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1611C4u;
    {
        const bool branch_taken_0x1611c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1611C4u;
            // 0x1611c8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611c4) {
            ctx->pc = 0x1611DCu;
            goto label_1611dc;
        }
    }
    ctx->pc = 0x1611CCu;
    // 0x1611cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1611ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1611d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1611d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1611d4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1611D4u;
    {
        const bool branch_taken_0x1611d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1611D4u;
            // 0x1611d8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611d4) {
            ctx->pc = 0x161290u;
            goto label_161290;
        }
    }
    ctx->pc = 0x1611DCu;
label_1611dc:
    // 0x1611dc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1611dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1611e0: 0xc058368  jal         func_160DA0
    ctx->pc = 0x1611E0u;
    SET_GPR_U32(ctx, 31, 0x1611E8u);
    ctx->pc = 0x1611E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1611E0u;
            // 0x1611e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160DA0u;
    if (runtime->hasFunction(0x160DA0u)) {
        auto targetFn = runtime->lookupFunction(0x160DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1611E8u; }
        if (ctx->pc != 0x1611E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTimeLightBand__4CMapFv_0x160da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1611E8u; }
        if (ctx->pc != 0x1611E8u) { return; }
    }
    ctx->pc = 0x1611E8u;
label_1611e8:
    // 0x1611e8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1611e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1611ec: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1611ECu;
    {
        const bool branch_taken_0x1611ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1611F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1611ECu;
            // 0x1611f0: 0x70001a  div         $zero, $v1, $s0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611ec) {
            ctx->pc = 0x1611F8u;
            goto label_1611f8;
        }
    }
    ctx->pc = 0x1611F4u;
    // 0x1611f4: 0x1cd  break       0, 7
    ctx->pc = 0x1611f4u;
    runtime->handleBreak(rdram, ctx);
label_1611f8:
    // 0x1611f8: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x1611f8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1611fc: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x1611fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x161200: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x161200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161204: 0x0  nop
    ctx->pc = 0x161204u;
    // NOP
    // 0x161208: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x161208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16120c: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x16120cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x161210: 0x2010  mfhi        $a0
    ctx->pc = 0x161210u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x161214: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x161214u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x161218: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x161218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16121c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16121cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161220: 0x0  nop
    ctx->pc = 0x161220u;
    // NOP
    // 0x161224: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x161224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x161228: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x161228u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16122c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16122cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161230: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x161230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161234: 0x0  nop
    ctx->pc = 0x161234u;
    // NOP
    // 0x161238: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x161238u;
    {
        const bool branch_taken_0x161238 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161238) {
            ctx->pc = 0x161244u;
            goto label_161244;
        }
    }
    ctx->pc = 0x161240u;
    // 0x161240: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x161240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_161244:
    // 0x161244: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x161244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x161248: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x161248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16124c: 0x46150041  sub.s       $f1, $f0, $f21
    ctx->pc = 0x16124cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x161250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161254: 0x0  nop
    ctx->pc = 0x161254u;
    // NOP
    // 0x161258: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x161258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16125c: 0x0  nop
    ctx->pc = 0x16125cu;
    // NOP
    // 0x161260: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x161260u;
    {
        const bool branch_taken_0x161260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x161264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161260u;
            // 0x161264: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161260) {
            ctx->pc = 0x16126Cu;
            goto label_16126c;
        }
    }
    ctx->pc = 0x161268u;
    // 0x161268: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x161268u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_16126c:
    // 0x16126c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16126cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x161270: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x161270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x161274: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x161274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x161278: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x161278u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16127c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x16127cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x161280: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x161280u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x161284: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x161284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x161288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x161288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16128c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x16128cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_161290:
    // 0x161290: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x161290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161294: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x161294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x161298: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x161298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16129c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1612a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1612a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1612a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1612a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1612a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1612A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1612ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1612A8u;
            // 0x1612ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1612B0u;
}
