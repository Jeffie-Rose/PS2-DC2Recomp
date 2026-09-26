#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMenuNumber__FP11mgCDrawPrimii9mgRect<i>9mgRect<i>ii
// Address: 0x221890 - 0x221aac
void DrawMenuNumber__FP11mgCDrawPrimii9mgRect_i_9mgRect_i_ii_0x221890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMenuNumber__FP11mgCDrawPrimii9mgRect_i_9mgRect_i_ii_0x221890");
#endif

    switch (ctx->pc) {
        case 0x2218f0u: goto label_2218f0;
        case 0x22194cu: goto label_22194c;
        case 0x221988u: goto label_221988;
        case 0x2219c0u: goto label_2219c0;
        case 0x2219d8u: goto label_2219d8;
        case 0x2219e8u: goto label_2219e8;
        case 0x221a20u: goto label_221a20;
        case 0x221a44u: goto label_221a44;
        case 0x221a5cu: goto label_221a5c;
        case 0x221a6cu: goto label_221a6c;
        default: break;
    }

    ctx->pc = 0x221890u;

    // 0x221890: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x221890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x221894: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x221894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x221898: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x221898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x22189c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x22189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2218a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2218a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2218a4: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x2218a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2218a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2218a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2218ac: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2218acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2218b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2218b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2218b4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2218b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2218b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2218b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2218bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2218bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2218c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2218c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2218c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2218c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2218c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2218c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2218cc: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x2218ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x2218d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2218d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2218d4: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x2218d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2218d8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2218d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2218dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2218dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2218e0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2218e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x2218e4: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x2218e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2218e8: 0xc0945b0  jal         func_2516C0
    ctx->pc = 0x2218E8u;
    SET_GPR_U32(ctx, 31, 0x2218F0u);
    ctx->pc = 0x2218ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2218E8u;
            // 0x2218ec: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2516C0u;
    if (runtime->hasFunction(0x2516C0u)) {
        auto targetFn = runtime->lookupFunction(0x2516C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2218F0u; }
        if (ctx->pc != 0x2218F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumberKeta__Fi_0x2516c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2218F0u; }
        if (ctx->pc != 0x2218F0u) { return; }
    }
    ctx->pc = 0x2218F0u;
label_2218f0:
    // 0x2218f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2218f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2218f4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2218f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2218f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2218f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2218fc: 0x8fb300b0  lw          $s3, 0xB0($sp)
    ctx->pc = 0x2218fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x221900: 0x8fb400b4  lw          $s4, 0xB4($sp)
    ctx->pc = 0x221900u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x221904: 0x83959380  lb          $s5, -0x6C80($gp)
    ctx->pc = 0x221904u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939520)));
    // 0x221908: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x221908u;
    {
        const bool branch_taken_0x221908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22190Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221908u;
            // 0x22190c: 0x8fb200c8  lw          $s2, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221908) {
            ctx->pc = 0x221950u;
            goto label_221950;
        }
    }
    ctx->pc = 0x221910u;
    // 0x221910: 0x44961000  mtc1        $s6, $f2
    ctx->pc = 0x221910u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x221914: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x221914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x221918: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x221918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22191c: 0x0  nop
    ctx->pc = 0x22191cu;
    // NOP
    // 0x221920: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x221920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x221924: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x221924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x221928: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x221928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22192c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x22192cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x221930: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x221930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x221934: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x221934u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221938: 0x0  nop
    ctx->pc = 0x221938u;
    // NOP
    // 0x22193c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x22193cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x221940: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x221940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x221944: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221944u;
    SET_GPR_U32(ctx, 31, 0x22194Cu);
    ctx->pc = 0x221948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221944u;
            // 0x221948: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22194Cu; }
        if (ctx->pc != 0x22194Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22194Cu; }
        if (ctx->pc != 0x22194Cu) { return; }
    }
    ctx->pc = 0x22194Cu;
label_22194c:
    // 0x22194c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22194cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_221950:
    // 0x221950: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x221950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x221954: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x221954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x221958: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x221958u;
    {
        const bool branch_taken_0x221958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x221958) {
            ctx->pc = 0x221980u;
            goto label_221980;
        }
    }
    ctx->pc = 0x221960u;
    // 0x221960: 0x6a10005  bgez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x221960u;
    {
        const bool branch_taken_0x221960 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x221964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221960u;
            // 0x221964: 0x26a2ffff  addiu       $v0, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221960) {
            ctx->pc = 0x221978u;
            goto label_221978;
        }
    }
    ctx->pc = 0x221968u;
    // 0x221968: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x221968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22196c: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x22196cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x221970: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x221970u;
    {
        const bool branch_taken_0x221970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221970u;
            // 0x221974: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221970) {
            ctx->pc = 0x221980u;
            goto label_221980;
        }
    }
    ctx->pc = 0x221978u;
label_221978:
    // 0x221978: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x221978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22197c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x22197cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_221980:
    // 0x221980: 0x1a200024  blez        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x221980u;
    {
        const bool branch_taken_0x221980 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x221980) {
            ctx->pc = 0x221A14u;
            goto label_221a14;
        }
    }
    ctx->pc = 0x221988u;
label_221988:
    // 0x221988: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x221988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22198c: 0xafb400a8  sw          $s4, 0xA8($sp)
    ctx->pc = 0x22198cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 20));
    // 0x221990: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x221990u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x221994: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x221994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x221998: 0x8fa800cc  lw          $t0, 0xCC($sp)
    ctx->pc = 0x221998u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x22199c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x22199cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2219a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2219a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219a4: 0x2769823  subu        $s3, $s3, $s6
    ctx->pc = 0x2219a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x2219a8: 0x29ea023  subu        $s4, $s4, $fp
    ctx->pc = 0x2219a8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x2219ac: 0x1810  mfhi        $v1
    ctx->pc = 0x2219acu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2219b0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2219b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2219b4: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x2219b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2219b8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2219B8u;
    SET_GPR_U32(ctx, 31, 0x2219C0u);
    ctx->pc = 0x2219BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2219B8u;
            // 0x2219bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219C0u; }
        if (ctx->pc != 0x2219C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219C0u; }
        if (ctx->pc != 0x2219C0u) { return; }
    }
    ctx->pc = 0x2219C0u;
label_2219c0:
    // 0x2219c0: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2219c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2219c4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2219c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2219c8: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x2219c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2219cc: 0x8fa800bc  lw          $t0, 0xBC($sp)
    ctx->pc = 0x2219ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2219d0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2219D0u;
    SET_GPR_U32(ctx, 31, 0x2219D8u);
    ctx->pc = 0x2219D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2219D0u;
            // 0x2219d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219D8u; }
        if (ctx->pc != 0x2219D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219D8u; }
        if (ctx->pc != 0x2219D8u) { return; }
    }
    ctx->pc = 0x2219D8u;
label_2219d8:
    // 0x2219d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2219d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2219dc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2219dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2219e0: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2219E0u;
    SET_GPR_U32(ctx, 31, 0x2219E8u);
    ctx->pc = 0x2219E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2219E0u;
            // 0x2219e4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219E8u; }
        if (ctx->pc != 0x2219E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2219E8u; }
        if (ctx->pc != 0x2219E8u) { return; }
    }
    ctx->pc = 0x2219E8u;
label_2219e8:
    // 0x2219e8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2219e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2219ec: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x2219ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x2219f0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2219f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2219f4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2219f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2219f8: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x2219f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2219fc: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2219fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x221a00: 0x0  nop
    ctx->pc = 0x221a00u;
    // NOP
    // 0x221a04: 0x1010  mfhi        $v0
    ctx->pc = 0x221a04u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x221a08: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x221a08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x221a0c: 0x1e20ffde  bgtz        $s1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x221A0Cu;
    {
        const bool branch_taken_0x221a0c = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x221A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221A0Cu;
            // 0x221a10: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a0c) {
            ctx->pc = 0x221988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221988;
        }
    }
    ctx->pc = 0x221A14u;
label_221a14:
    // 0x221a14: 0x0  nop
    ctx->pc = 0x221a14u;
    // NOP
    // 0x221a18: 0x1aa00017  blez        $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x221A18u;
    {
        const bool branch_taken_0x221a18 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x221a18) {
            ctx->pc = 0x221A78u;
            goto label_221a78;
        }
    }
    ctx->pc = 0x221A20u;
label_221a20:
    // 0x221a20: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x221a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x221a24: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x221a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a28: 0x8fa800cc  lw          $t0, 0xCC($sp)
    ctx->pc = 0x221a28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x221a2c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x221a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x221a30: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x221a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x221a34: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x221a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a38: 0x2769823  subu        $s3, $s3, $s6
    ctx->pc = 0x221a38u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x221a3c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x221A3Cu;
    SET_GPR_U32(ctx, 31, 0x221A44u);
    ctx->pc = 0x221A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221A3Cu;
            // 0x221a40: 0x29ea023  subu        $s4, $s4, $fp (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A44u; }
        if (ctx->pc != 0x221A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A44u; }
        if (ctx->pc != 0x221A44u) { return; }
    }
    ctx->pc = 0x221A44u;
label_221a44:
    // 0x221a44: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x221a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x221a48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x221a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a4c: 0x8fa800bc  lw          $t0, 0xBC($sp)
    ctx->pc = 0x221a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x221a50: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x221a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x221a54: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x221A54u;
    SET_GPR_U32(ctx, 31, 0x221A5Cu);
    ctx->pc = 0x221A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221A54u;
            // 0x221a58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A5Cu; }
        if (ctx->pc != 0x221A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A5Cu; }
        if (ctx->pc != 0x221A5Cu) { return; }
    }
    ctx->pc = 0x221A5Cu;
label_221a5c:
    // 0x221a5c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x221a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a60: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x221a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x221a64: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x221A64u;
    SET_GPR_U32(ctx, 31, 0x221A6Cu);
    ctx->pc = 0x221A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221A64u;
            // 0x221a68: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A6Cu; }
        if (ctx->pc != 0x221A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A6Cu; }
        if (ctx->pc != 0x221A6Cu) { return; }
    }
    ctx->pc = 0x221A6Cu;
label_221a6c:
    // 0x221a6c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x221a6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x221a70: 0x1ea0ffeb  bgtz        $s5, . + 4 + (-0x15 << 2)
    ctx->pc = 0x221A70u;
    {
        const bool branch_taken_0x221a70 = (GPR_S32(ctx, 21) > 0);
        if (branch_taken_0x221a70) {
            ctx->pc = 0x221A20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221a20;
        }
    }
    ctx->pc = 0x221A78u;
label_221a78:
    // 0x221a78: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x221a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221a7c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x221a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x221a80: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x221a80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x221a84: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x221a84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x221a88: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x221a88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x221a8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x221a8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221a90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x221a90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221a94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x221a94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221a98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x221a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x221a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x221AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221AA4u;
            // 0x221aa8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221AACu;
}
