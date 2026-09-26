#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IndexToPartsPlace__11CAutoMapGenFv
// Address: 0x1d8230 - 0x1d8564
void IndexToPartsPlace__11CAutoMapGenFv_0x1d8230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IndexToPartsPlace__11CAutoMapGenFv_0x1d8230");
#endif

    switch (ctx->pc) {
        case 0x1d8260u: goto label_1d8260;
        case 0x1d8278u: goto label_1d8278;
        case 0x1d8284u: goto label_1d8284;
        case 0x1d8290u: goto label_1d8290;
        case 0x1d82a4u: goto label_1d82a4;
        case 0x1d82d4u: goto label_1d82d4;
        case 0x1d82dcu: goto label_1d82dc;
        case 0x1d8378u: goto label_1d8378;
        case 0x1d83dcu: goto label_1d83dc;
        case 0x1d83f4u: goto label_1d83f4;
        case 0x1d840cu: goto label_1d840c;
        case 0x1d8448u: goto label_1d8448;
        case 0x1d8454u: goto label_1d8454;
        case 0x1d8474u: goto label_1d8474;
        case 0x1d84acu: goto label_1d84ac;
        case 0x1d84b8u: goto label_1d84b8;
        case 0x1d84c4u: goto label_1d84c4;
        case 0x1d84ccu: goto label_1d84cc;
        default: break;
    }

    ctx->pc = 0x1d8230u;

    // 0x1d8230: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1d8230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1d8234: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d8234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1d8238: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d8238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d823c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d823cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d8240: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d8240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d8244: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d8244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d8248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d824c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d824cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8254: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d8254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d8258: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1D8258u;
    SET_GPR_U32(ctx, 31, 0x1D8260u);
    ctx->pc = 0x1D825Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8258u;
            // 0x1d825c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8260u; }
        if (ctx->pc != 0x1D8260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8260u; }
        if (ctx->pc != 0x1D8260u) { return; }
    }
    ctx->pc = 0x1D8260u;
label_1d8260:
    // 0x1d8260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d8260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8264: 0x122000b6  beqz        $s1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1D8264u;
    {
        const bool branch_taken_0x1d8264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8264) {
            ctx->pc = 0x1D8540u;
            goto label_1d8540;
        }
    }
    ctx->pc = 0x1D826Cu;
    // 0x1d826c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d826cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d8270: 0xc0a0c74  jal         func_2831D0
    ctx->pc = 0x1D8270u;
    SET_GPR_U32(ctx, 31, 0x1D8278u);
    ctx->pc = 0x1D8274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8270u;
            // 0x1d8274: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (runtime->hasFunction(0x2831D0u)) {
        auto targetFn = runtime->lookupFunction(0x2831D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8278u; }
        if (ctx->pc != 0x1D8278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearStack__6CSceneFi_0x2831d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8278u; }
        if (ctx->pc != 0x1D8278u) { return; }
    }
    ctx->pc = 0x1D8278u;
label_1d8278:
    // 0x1d8278: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d8278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d827c: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x1D827Cu;
    SET_GPR_U32(ctx, 31, 0x1D8284u);
    ctx->pc = 0x1D8280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D827Cu;
            // 0x1d8280: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8284u; }
        if (ctx->pc != 0x1D8284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8284u; }
        if (ctx->pc != 0x1D8284u) { return; }
    }
    ctx->pc = 0x1D8284u;
label_1d8284:
    // 0x1d8284: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d8284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d8288: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x1D8288u;
    SET_GPR_U32(ctx, 31, 0x1D8290u);
    ctx->pc = 0x1D828Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8288u;
            // 0x1d828c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8290u; }
        if (ctx->pc != 0x1D8290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8290u; }
        if (ctx->pc != 0x1D8290u) { return; }
    }
    ctx->pc = 0x1D8290u;
label_1d8290:
    // 0x1d8290: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d8290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8294: 0x124000aa  beqz        $s2, . + 4 + (0xAA << 2)
    ctx->pc = 0x1D8294u;
    {
        const bool branch_taken_0x1d8294 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8294u;
            // 0x1d8298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8294) {
            ctx->pc = 0x1D8540u;
            goto label_1d8540;
        }
    }
    ctx->pc = 0x1D829Cu;
    // 0x1d829c: 0xc0574d4  jal         func_15D350
    ctx->pc = 0x1D829Cu;
    SET_GPR_U32(ctx, 31, 0x1D82A4u);
    ctx->pc = 0x15D350u;
    if (runtime->hasFunction(0x15D350u)) {
        auto targetFn = runtime->lookupFunction(0x15D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D82A4u; }
        if (ctx->pc != 0x1D82A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearPlaceParts__4CMapFv_0x15d350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D82A4u; }
        if (ctx->pc != 0x1D82A4u) { return; }
    }
    ctx->pc = 0x1D82A4u;
label_1d82a4:
    // 0x1d82a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d82a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d82a8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1d82a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d82ac: 0x2442d9c0  addiu       $v0, $v0, -0x2640
    ctx->pc = 0x1d82acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957504));
    // 0x1d82b0: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1d82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d82b4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1d82b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d82b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d82b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d82bc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d82c0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1d82c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1d82c4: 0x2442d9d0  addiu       $v0, $v0, -0x2630
    ctx->pc = 0x1d82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957520));
    // 0x1d82c8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d82c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d82cc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1D82CCu;
    {
        const bool branch_taken_0x1d82cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D82D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D82CCu;
            // 0x1d82d0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82cc) {
            ctx->pc = 0x1D83BCu;
            goto label_1d83bc;
        }
    }
    ctx->pc = 0x1D82D4u;
label_1d82d4:
    // 0x1d82d4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1D82D4u;
    {
        const bool branch_taken_0x1d82d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D82D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D82D4u;
            // 0x1d82d8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82d4) {
            ctx->pc = 0x1D83A8u;
            goto label_1d83a8;
        }
    }
    ctx->pc = 0x1D82DCu;
label_1d82dc:
    // 0x1d82dc: 0x0  nop
    ctx->pc = 0x1d82dcu;
    // NOP
    // 0x1d82e0: 0x8e0301cc  lw          $v1, 0x1CC($s0)
    ctx->pc = 0x1d82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1d82e4: 0x2642818  mult        $a1, $s3, $a0
    ctx->pc = 0x1d82e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d82e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d82ec: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d82ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d82f0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d82f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d82f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d82f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d82f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d82fc: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1d82fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1d8300: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x1d8300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d8304: 0x10820025  beq         $a0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D8304u;
    {
        const bool branch_taken_0x1d8304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8304) {
            ctx->pc = 0x1D839Cu;
            goto label_1d839c;
        }
    }
    ctx->pc = 0x1D830Cu;
    // 0x1d830c: 0x44941000  mtc1        $s4, $f2
    ctx->pc = 0x1d830cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d8310: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1d8310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d8314: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d8314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d8318: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d8318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d831c: 0xc60101bc  lwc1        $f1, 0x1BC($s0)
    ctx->pc = 0x1d831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8320: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d8320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d8324: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d8324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1d8328: 0x24639080  addiu       $v1, $v1, -0x6F80
    ctx->pc = 0x1d8328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938752));
    // 0x1d832c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8330: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d8330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8334: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1d8334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d833c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1d833cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d8340: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1d8340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d8344: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x1d8344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d8348: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1d8348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d834c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1d834cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1d8350: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1d8350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1d8354: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1d8354u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8358: 0x0  nop
    ctx->pc = 0x1d8358u;
    // NOP
    // 0x1d835c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1d835cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1d8360: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1d8360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d8364: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x1d8364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8368: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d8368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d836c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1d836cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1d8370: 0xc057420  jal         func_15D080
    ctx->pc = 0x1D8370u;
    SET_GPR_U32(ctx, 31, 0x1D8378u);
    ctx->pc = 0x1D8374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8370u;
            // 0x1d8374: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D080u;
    if (runtime->hasFunction(0x15D080u)) {
        auto targetFn = runtime->lookupFunction(0x15D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8378u; }
        if (ctx->pc != 0x1D8378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceParts__4CMapFPcPfPfPfP9mgCMemory_0x15d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8378u; }
        if (ctx->pc != 0x1D8378u) { return; }
    }
    ctx->pc = 0x1D8378u;
label_1d8378:
    // 0x1d8378: 0x860401b8  lh          $a0, 0x1B8($s0)
    ctx->pc = 0x1d8378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d837c: 0x8e0301cc  lw          $v1, 0x1CC($s0)
    ctx->pc = 0x1d837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1d8380: 0x2642818  mult        $a1, $s3, $a0
    ctx->pc = 0x1d8380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d8384: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d8384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d8388: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d8388u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d838c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d838cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d8390: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d8390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d8394: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1d8394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1d8398: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1d8398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_1d839c:
    // 0x1d839c: 0x0  nop
    ctx->pc = 0x1d839cu;
    // NOP
    // 0x1d83a0: 0x26b5001c  addiu       $s5, $s5, 0x1C
    ctx->pc = 0x1d83a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x1d83a4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d83a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d83a8:
    // 0x1d83a8: 0x860401b8  lh          $a0, 0x1B8($s0)
    ctx->pc = 0x1d83a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d83ac: 0x284102a  slt         $v0, $s4, $a0
    ctx->pc = 0x1d83acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d83b0: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1D83B0u;
    {
        const bool branch_taken_0x1d83b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d83b0) {
            ctx->pc = 0x1D82DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d82dc;
        }
    }
    ctx->pc = 0x1D83B8u;
    // 0x1d83b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d83b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d83bc:
    // 0x1d83bc: 0x0  nop
    ctx->pc = 0x1d83bcu;
    // NOP
    // 0x1d83c0: 0x860201ba  lh          $v0, 0x1BA($s0)
    ctx->pc = 0x1d83c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 442)));
    // 0x1d83c4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d83c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d83c8: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1D83C8u;
    {
        const bool branch_taken_0x1d83c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D83CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D83C8u;
            // 0x1d83cc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d83c8) {
            ctx->pc = 0x1D82D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d82d4;
        }
    }
    ctx->pc = 0x1D83D0u;
    // 0x1d83d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d83d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d83d4: 0xc076050  jal         func_1D8140
    ctx->pc = 0x1D83D4u;
    SET_GPR_U32(ctx, 31, 0x1D83DCu);
    ctx->pc = 0x1D83D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D83D4u;
            // 0x1d83d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8140u;
    if (runtime->hasFunction(0x1D8140u)) {
        auto targetFn = runtime->lookupFunction(0x1D8140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83DCu; }
        if (ctx->pc != 0x1D83DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchHealingPoint__11CAutoMapGenFP4CMap_0x1d8140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83DCu; }
        if (ctx->pc != 0x1D83DCu) { return; }
    }
    ctx->pc = 0x1D83DCu;
label_1d83dc:
    // 0x1d83dc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1d83dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d83e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d83e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d83e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D83E4u;
    {
        const bool branch_taken_0x1d83e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D83E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D83E4u;
            // 0x1d83e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d83e4) {
            ctx->pc = 0x1D83F4u;
            goto label_1d83f4;
        }
    }
    ctx->pc = 0x1D83ECu;
    // 0x1d83ec: 0xc075eec  jal         func_1D7BB0
    ctx->pc = 0x1D83ECu;
    SET_GPR_U32(ctx, 31, 0x1D83F4u);
    ctx->pc = 0x1D7BB0u;
    if (runtime->hasFunction(0x1D7BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83F4u; }
        if (ctx->pc != 0x1D83F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDummyTree__11CAutoMapGenFv_0x1d7bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83F4u; }
        if (ctx->pc != 0x1D83F4u) { return; }
    }
    ctx->pc = 0x1D83F4u;
label_1d83f4:
    // 0x1d83f4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1d83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d83f8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d83f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d83fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D83FCu;
    {
        const bool branch_taken_0x1d83fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D83FCu;
            // 0x1d8400: 0x3c02c7c3  lui         $v0, 0xC7C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d83fc) {
            ctx->pc = 0x1D8410u;
            goto label_1d8410;
        }
    }
    ctx->pc = 0x1D8404u;
    // 0x1d8404: 0xc075ecc  jal         func_1D7B30
    ctx->pc = 0x1D8404u;
    SET_GPR_U32(ctx, 31, 0x1D840Cu);
    ctx->pc = 0x1D8408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8404u;
            // 0x1d8408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D840Cu; }
        if (ctx->pc != 0x1D840Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDummyMountain__11CAutoMapGenFv_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D840Cu; }
        if (ctx->pc != 0x1D840Cu) { return; }
    }
    ctx->pc = 0x1D840Cu;
label_1d840c:
    // 0x1d840c: 0x3c02c7c3  lui         $v0, 0xC7C3
    ctx->pc = 0x1d840cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
label_1d8410:
    // 0x1d8410: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d8410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1d8414: 0x34424f80  ori         $v0, $v0, 0x4F80
    ctx->pc = 0x1d8414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20352);
    // 0x1d8418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d841c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1d841cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x1d8420: 0x24a57e20  addiu       $a1, $a1, 0x7E20
    ctx->pc = 0x1d8420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32288));
    // 0x1d8424: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d8424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8428: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1d8428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d842c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1d842cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1d8430: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1d8430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d8434: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x1d8434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d8438: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1d8438u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d843c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1d843cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1d8440: 0xc057420  jal         func_15D080
    ctx->pc = 0x1D8440u;
    SET_GPR_U32(ctx, 31, 0x1D8448u);
    ctx->pc = 0x1D8444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8440u;
            // 0x1d8444: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D080u;
    if (runtime->hasFunction(0x15D080u)) {
        auto targetFn = runtime->lookupFunction(0x15D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8448u; }
        if (ctx->pc != 0x1D8448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceParts__4CMapFPcPfPfPfP9mgCMemory_0x15d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8448u; }
        if (ctx->pc != 0x1D8448u) { return; }
    }
    ctx->pc = 0x1D8448u;
label_1d8448:
    // 0x1d8448: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d8448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d844c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d844cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8450: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d8450u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8454:
    // 0x1d8454: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d8454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1d8458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d845c: 0x24a57e28  addiu       $a1, $a1, 0x7E28
    ctx->pc = 0x1d845cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32296));
    // 0x1d8460: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1d8460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d8464: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1d8464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d8468: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x1d8468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d846c: 0xc057420  jal         func_15D080
    ctx->pc = 0x1D846Cu;
    SET_GPR_U32(ctx, 31, 0x1D8474u);
    ctx->pc = 0x1D8470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D846Cu;
            // 0x1d8470: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D080u;
    if (runtime->hasFunction(0x15D080u)) {
        auto targetFn = runtime->lookupFunction(0x15D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8474u; }
        if (ctx->pc != 0x1D8474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceParts__4CMapFPcPfPfPfP9mgCMemory_0x15d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8474u; }
        if (ctx->pc != 0x1D8474u) { return; }
    }
    ctx->pc = 0x1D8474u;
label_1d8474:
    // 0x1d8474: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x1d8474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x1d8478: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d8478u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d847c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1d847cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1d8480: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x1d8480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1d8484: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D8484u;
    {
        const bool branch_taken_0x1d8484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8484u;
            // 0x1d8488: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8484) {
            ctx->pc = 0x1D8454u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d8454;
        }
    }
    ctx->pc = 0x1D848Cu;
    // 0x1d848c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d848cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1d8490: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1d8490u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8498: 0x24a57e30  addiu       $a1, $a1, 0x7E30
    ctx->pc = 0x1d8498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32304));
    // 0x1d849c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1d849cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d84a0: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1d84a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d84a4: 0xc057420  jal         func_15D080
    ctx->pc = 0x1D84A4u;
    SET_GPR_U32(ctx, 31, 0x1D84ACu);
    ctx->pc = 0x1D84A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D84A4u;
            // 0x1d84a8: 0x27a80090  addiu       $t0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D080u;
    if (runtime->hasFunction(0x15D080u)) {
        auto targetFn = runtime->lookupFunction(0x15D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84ACu; }
        if (ctx->pc != 0x1D84ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceParts__4CMapFPcPfPfPfP9mgCMemory_0x15d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84ACu; }
        if (ctx->pc != 0x1D84ACu) { return; }
    }
    ctx->pc = 0x1D84ACu;
label_1d84ac:
    // 0x1d84ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d84acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d84b0: 0xc05745c  jal         func_15D170
    ctx->pc = 0x1D84B0u;
    SET_GPR_U32(ctx, 31, 0x1D84B8u);
    ctx->pc = 0x1D84B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D84B0u;
            // 0x1d84b4: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D170u;
    if (runtime->hasFunction(0x15D170u)) {
        auto targetFn = runtime->lookupFunction(0x15D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84B8u; }
        if (ctx->pc != 0x1D84B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlacePartsEnd__4CMapFv_0x15d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84B8u; }
        if (ctx->pc != 0x1D84B8u) { return; }
    }
    ctx->pc = 0x1D84B8u;
label_1d84b8:
    // 0x1d84b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d84b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d84bc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D84BCu;
    {
        const bool branch_taken_0x1d84bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D84C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D84BCu;
            // 0x1d84c0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84bc) {
            ctx->pc = 0x1D852Cu;
            goto label_1d852c;
        }
    }
    ctx->pc = 0x1D84C4u;
label_1d84c4:
    // 0x1d84c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1D84C4u;
    {
        const bool branch_taken_0x1d84c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D84C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D84C4u;
            // 0x1d84c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d84c4) {
            ctx->pc = 0x1D8518u;
            goto label_1d8518;
        }
    }
    ctx->pc = 0x1D84CCu;
label_1d84cc:
    // 0x1d84cc: 0x0  nop
    ctx->pc = 0x1d84ccu;
    // NOP
    // 0x1d84d0: 0x8e0301cc  lw          $v1, 0x1CC($s0)
    ctx->pc = 0x1d84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1d84d4: 0xe53018  mult        $a2, $a3, $a1
    ctx->pc = 0x1d84d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d84d8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1d84d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d84dc: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1d84dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d84e0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d84e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d84e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d84e8: 0x692821  addu        $a1, $v1, $t1
    ctx->pc = 0x1d84e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1d84ec: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x1d84ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d84f0: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D84F0u;
    {
        const bool branch_taken_0x1d84f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d84f0) {
            ctx->pc = 0x1D850Cu;
            goto label_1d850c;
        }
    }
    ctx->pc = 0x1D84F8u;
    // 0x1d84f8: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1d84f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d84fc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D84FCu;
    {
        const bool branch_taken_0x1d84fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d84fc) {
            ctx->pc = 0x1D850Cu;
            goto label_1d850c;
        }
    }
    ctx->pc = 0x1D8504u;
    // 0x1d8504: 0x8c6302ec  lw          $v1, 0x2EC($v1)
    ctx->pc = 0x1d8504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 748)));
    // 0x1d8508: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x1d8508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_1d850c:
    // 0x1d850c: 0x0  nop
    ctx->pc = 0x1d850cu;
    // NOP
    // 0x1d8510: 0x2529001c  addiu       $t1, $t1, 0x1C
    ctx->pc = 0x1d8510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28));
    // 0x1d8514: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d8514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d8518:
    // 0x1d8518: 0x860501b8  lh          $a1, 0x1B8($s0)
    ctx->pc = 0x1d8518u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d851c: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x1d851cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d8520: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1D8520u;
    {
        const bool branch_taken_0x1d8520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8520) {
            ctx->pc = 0x1D84CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d84cc;
        }
    }
    ctx->pc = 0x1D8528u;
    // 0x1d8528: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d8528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1d852c:
    // 0x1d852c: 0x0  nop
    ctx->pc = 0x1d852cu;
    // NOP
    // 0x1d8530: 0x860301ba  lh          $v1, 0x1BA($s0)
    ctx->pc = 0x1d8530u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 442)));
    // 0x1d8534: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x1d8534u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d8538: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D8538u;
    {
        const bool branch_taken_0x1d8538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D853Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8538u;
            // 0x1d853c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8538) {
            ctx->pc = 0x1D84C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d84c4;
        }
    }
    ctx->pc = 0x1D8540u;
label_1d8540:
    // 0x1d8540: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1d8540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d8544: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d8544u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8548: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d8548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d854c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d854cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d855c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D855Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D855Cu;
            // 0x1d8560: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8564u;
}
