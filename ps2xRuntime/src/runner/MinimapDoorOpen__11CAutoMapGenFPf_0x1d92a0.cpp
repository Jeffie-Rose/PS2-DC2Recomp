#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MinimapDoorOpen__11CAutoMapGenFPf
// Address: 0x1d92a0 - 0x1d93f0
void MinimapDoorOpen__11CAutoMapGenFPf_0x1d92a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MinimapDoorOpen__11CAutoMapGenFPf_0x1d92a0");
#endif

    switch (ctx->pc) {
        case 0x1d92f0u: goto label_1d92f0;
        case 0x1d9324u: goto label_1d9324;
        default: break;
    }

    ctx->pc = 0x1d92a0u;

    // 0x1d92a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d92a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d92a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d92a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d92a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d92a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d92ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d92acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d92b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d92b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d92b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d92b8: 0x8c9001cc  lw          $s0, 0x1CC($a0)
    ctx->pc = 0x1d92b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d92bc: 0x12000046  beqz        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1D92BCu;
    {
        const bool branch_taken_0x1d92bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D92C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D92BCu;
            // 0x1d92c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92bc) {
            ctx->pc = 0x1D93D8u;
            goto label_1d93d8;
        }
    }
    ctx->pc = 0x1D92C4u;
    // 0x1d92c4: 0xc62201bc  lwc1        $f2, 0x1BC($s1)
    ctx->pc = 0x1d92c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d92c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d92cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d92ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d92d0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1d92d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d92d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d92d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1d92d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d92d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d92dc: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1d92dcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1d92e0: 0x0  nop
    ctx->pc = 0x1d92e0u;
    // NOP
    // 0x1d92e4: 0x0  nop
    ctx->pc = 0x1d92e4u;
    // NOP
    // 0x1d92e8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D92E8u;
    SET_GPR_U32(ctx, 31, 0x1D92F0u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92F0u; }
        if (ctx->pc != 0x1D92F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92F0u; }
        if (ctx->pc != 0x1D92F0u) { return; }
    }
    ctx->pc = 0x1D92F0u;
label_1d92f0:
    // 0x1d92f0: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1d92f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d92f4: 0xc62201c0  lwc1        $f2, 0x1C0($s1)
    ctx->pc = 0x1d92f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d92f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d92f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d92fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d9300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9304: 0x0  nop
    ctx->pc = 0x1d9304u;
    // NOP
    // 0x1d9308: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d9308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1d930c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d930cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d9310: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1d9310u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1d9314: 0x0  nop
    ctx->pc = 0x1d9314u;
    // NOP
    // 0x1d9318: 0x0  nop
    ctx->pc = 0x1d9318u;
    // NOP
    // 0x1d931c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D931Cu;
    SET_GPR_U32(ctx, 31, 0x1D9324u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9324u; }
        if (ctx->pc != 0x1D9324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9324u; }
        if (ctx->pc != 0x1D9324u) { return; }
    }
    ctx->pc = 0x1D9324u;
label_1d9324:
    // 0x1d9324: 0x862401b8  lh          $a0, 0x1B8($s1)
    ctx->pc = 0x1d9324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1d9328: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1d9328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1d932c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1d932cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1d9330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d9334: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x1d9334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d9338: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d9338u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d933c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d933cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d9340: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d9340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d9344: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1d9344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1d9348: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1d9348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d934c: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x1d934cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9350: 0x10c00021  beqz        $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D9350u;
    {
        const bool branch_taken_0x1d9350 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9350) {
            ctx->pc = 0x1D93D8u;
            goto label_1d93d8;
        }
    }
    ctx->pc = 0x1D9358u;
    // 0x1d9358: 0x8cc501dc  lw          $a1, 0x1DC($a2)
    ctx->pc = 0x1d9358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 476)));
    // 0x1d935c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d935cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9360: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x1d9360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x1d9364: 0xacc501dc  sw          $a1, 0x1DC($a2)
    ctx->pc = 0x1d9364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 476), GPR_U32(ctx, 5));
    // 0x1d9368: 0x862501b8  lh          $a1, 0x1B8($s1)
    ctx->pc = 0x1d9368u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1d936c: 0x8e2801cc  lw          $t0, 0x1CC($s1)
    ctx->pc = 0x1d936cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x1d9370: 0x453018  mult        $a2, $v0, $a1
    ctx->pc = 0x1d9370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d9374: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1d9374u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d9378: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1d9378u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d937c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1d937cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d9380: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x1d9380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1d9384: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1d9384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d9388: 0x90a5000a  lbu         $a1, 0xA($a1)
    ctx->pc = 0x1d9388u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x1d938c: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D938Cu;
    {
        const bool branch_taken_0x1d938c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D9390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D938Cu;
            // 0x1d9390: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d938c) {
            ctx->pc = 0x1D9398u;
            goto label_1d9398;
        }
    }
    ctx->pc = 0x1D9394u;
    // 0x1d9394: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1d9394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9398:
    // 0x1d9398: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d9398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d939c: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D939Cu;
    {
        const bool branch_taken_0x1d939c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D93A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D939Cu;
            // 0x1d93a0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d939c) {
            ctx->pc = 0x1D93A8u;
            goto label_1d93a8;
        }
    }
    ctx->pc = 0x1D93A4u;
    // 0x1d93a4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1d93a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d93a8:
    // 0x1d93a8: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D93A8u;
    {
        const bool branch_taken_0x1d93a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d93a8) {
            ctx->pc = 0x1D93B4u;
            goto label_1d93b4;
        }
    }
    ctx->pc = 0x1D93B0u;
    // 0x1d93b0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d93b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d93b4:
    // 0x1d93b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1d93b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d93b8: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D93B8u;
    {
        const bool branch_taken_0x1d93b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D93BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93B8u;
            // 0x1d93bc: 0xc82821  addu        $a1, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93b8) {
            ctx->pc = 0x1D93C4u;
            goto label_1d93c4;
        }
    }
    ctx->pc = 0x1D93C0u;
    // 0x1d93c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d93c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d93c4:
    // 0x1d93c4: 0xe02027  not         $a0, $a3
    ctx->pc = 0x1d93c4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
    // 0x1d93c8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1d93c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d93cc: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1d93ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1d93d0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d93d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d93d4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x1d93d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_1d93d8:
    // 0x1d93d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d93d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d93dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d93dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d93e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d93e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d93e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d93e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d93e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D93E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D93ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93E8u;
            // 0x1d93ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D93F0u;
}
