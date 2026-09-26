#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_MOS_END__FP12RS_STACKDATAi
// Address: 0x2d1900 - 0x2d19ac
void ps2__CHECK_MOS_END__FP12RS_STACKDATAi_0x2d1900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_MOS_END__FP12RS_STACKDATAi_0x2d1900");
#endif

    switch (ctx->pc) {
        case 0x2d1900u: goto label_2d1900;
        case 0x2d1904u: goto label_2d1904;
        case 0x2d1908u: goto label_2d1908;
        case 0x2d190cu: goto label_2d190c;
        case 0x2d1910u: goto label_2d1910;
        case 0x2d1914u: goto label_2d1914;
        case 0x2d1918u: goto label_2d1918;
        case 0x2d191cu: goto label_2d191c;
        case 0x2d1920u: goto label_2d1920;
        case 0x2d1924u: goto label_2d1924;
        case 0x2d1928u: goto label_2d1928;
        case 0x2d192cu: goto label_2d192c;
        case 0x2d1930u: goto label_2d1930;
        case 0x2d1934u: goto label_2d1934;
        case 0x2d1938u: goto label_2d1938;
        case 0x2d193cu: goto label_2d193c;
        case 0x2d1940u: goto label_2d1940;
        case 0x2d1944u: goto label_2d1944;
        case 0x2d1948u: goto label_2d1948;
        case 0x2d194cu: goto label_2d194c;
        case 0x2d1950u: goto label_2d1950;
        case 0x2d1954u: goto label_2d1954;
        case 0x2d1958u: goto label_2d1958;
        case 0x2d195cu: goto label_2d195c;
        case 0x2d1960u: goto label_2d1960;
        case 0x2d1964u: goto label_2d1964;
        case 0x2d1968u: goto label_2d1968;
        case 0x2d196cu: goto label_2d196c;
        case 0x2d1970u: goto label_2d1970;
        case 0x2d1974u: goto label_2d1974;
        case 0x2d1978u: goto label_2d1978;
        case 0x2d197cu: goto label_2d197c;
        case 0x2d1980u: goto label_2d1980;
        case 0x2d1984u: goto label_2d1984;
        case 0x2d1988u: goto label_2d1988;
        case 0x2d198cu: goto label_2d198c;
        case 0x2d1990u: goto label_2d1990;
        case 0x2d1994u: goto label_2d1994;
        case 0x2d1998u: goto label_2d1998;
        case 0x2d199cu: goto label_2d199c;
        case 0x2d19a0u: goto label_2d19a0;
        case 0x2d19a4u: goto label_2d19a4;
        case 0x2d19a8u: goto label_2d19a8;
        default: break;
    }

    ctx->pc = 0x2d1900u;

label_2d1900:
    // 0x2d1900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d1904:
    // 0x2d1904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1908:
    // 0x2d1908: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d1908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d190c:
    // 0x2d190c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d1910:
    // 0x2d1910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d1914:
    // 0x2d1914: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d1914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d1918:
    // 0x2d1918: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
label_2d191c:
    if (ctx->pc == 0x2D191Cu) {
        ctx->pc = 0x2D191Cu;
            // 0x2d191c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1920u;
        goto label_2d1920;
    }
    ctx->pc = 0x2D1918u;
    {
        const bool branch_taken_0x2d1918 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D191Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1918u;
            // 0x2d191c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1918) {
            ctx->pc = 0x2D1944u;
            goto label_2d1944;
        }
    }
    ctx->pc = 0x2D1920u;
label_2d1920:
    // 0x2d1920: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2d1924:
    // 0x2d1924: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d1924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2d1928:
    // 0x2d1928: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d1928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d192c:
    // 0x2d192c: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x2d192cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_2d1930:
    // 0x2d1930: 0x320f809  jalr        $t9
label_2d1934:
    if (ctx->pc == 0x2D1934u) {
        ctx->pc = 0x2D1934u;
            // 0x2d1934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1938u;
        goto label_2d1938;
    }
    ctx->pc = 0x2D1930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D1938u);
        ctx->pc = 0x2D1934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1930u;
            // 0x2d1934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D1938u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D1938u; }
            if (ctx->pc != 0x2D1938u) { return; }
        }
        }
    }
    ctx->pc = 0x2D1938u;
label_2d1938:
    // 0x2d1938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d1938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d193c:
    // 0x2d193c: 0x0  nop
    ctx->pc = 0x2d193cu;
    // NOP
label_2d1940:
    // 0x2d1940: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2d1940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2d1944:
    // 0x2d1944: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d1944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d1948:
    // 0x2d1948: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
label_2d194c:
    if (ctx->pc == 0x2D194Cu) {
        ctx->pc = 0x2D194Cu;
            // 0x2d194c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1950u;
        goto label_2d1950;
    }
    ctx->pc = 0x2D1948u;
    {
        const bool branch_taken_0x2d1948 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D194Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1948u;
            // 0x2d194c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1948) {
            ctx->pc = 0x2D198Cu;
            goto label_2d198c;
        }
    }
    ctx->pc = 0x2D1950u;
label_2d1950:
    // 0x2d1950: 0xc0b37a8  jal         func_2CDEA0
label_2d1954:
    if (ctx->pc == 0x2D1954u) {
        ctx->pc = 0x2D1954u;
            // 0x2d1954: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x2D1958u;
        goto label_2d1958;
    }
    ctx->pc = 0x2D1950u;
    SET_GPR_U32(ctx, 31, 0x2D1958u);
    ctx->pc = 0x2D1954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1950u;
            // 0x2d1954: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1958u; }
        if (ctx->pc != 0x2D1958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1958u; }
        if (ctx->pc != 0x2D1958u) { return; }
    }
    ctx->pc = 0x2D1958u;
label_2d1958:
    // 0x2d1958: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2d195c:
    if (ctx->pc == 0x2D195Cu) {
        ctx->pc = 0x2D195Cu;
            // 0x2d195c: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x2D1960u;
        goto label_2d1960;
    }
    ctx->pc = 0x2D1958u;
    {
        const bool branch_taken_0x2d1958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D195Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1958u;
            // 0x2d195c: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1958) {
            ctx->pc = 0x2D1968u;
            goto label_2d1968;
        }
    }
    ctx->pc = 0x2D1960u;
label_2d1960:
    // 0x2d1960: 0x1000000d  b           . + 4 + (0xD << 2)
label_2d1964:
    if (ctx->pc == 0x2D1964u) {
        ctx->pc = 0x2D1964u;
            // 0x2d1964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1968u;
        goto label_2d1968;
    }
    ctx->pc = 0x2D1960u;
    {
        const bool branch_taken_0x2d1960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1960u;
            // 0x2d1964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1960) {
            ctx->pc = 0x2D1998u;
            goto label_2d1998;
        }
    }
    ctx->pc = 0x2D1968u;
label_2d1968:
    // 0x2d1968: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d1968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2d196c:
    // 0x2d196c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d196cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d1970:
    // 0x2d1970: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x2d1970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_2d1974:
    // 0x2d1974: 0x320f809  jalr        $t9
label_2d1978:
    if (ctx->pc == 0x2D1978u) {
        ctx->pc = 0x2D1978u;
            // 0x2d1978: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D197Cu;
        goto label_2d197c;
    }
    ctx->pc = 0x2D1974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D197Cu);
        ctx->pc = 0x2D1978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1974u;
            // 0x2d1978: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D197Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D197Cu; }
            if (ctx->pc != 0x2D197Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2D197Cu;
label_2d197c:
    // 0x2d197c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d197cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d1980:
    // 0x2d1980: 0x0  nop
    ctx->pc = 0x2d1980u;
    // NOP
label_2d1984:
    // 0x2d1984: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2d1984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2d1988:
    // 0x2d1988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d198c:
    // 0x2d198c: 0xc0b37b4  jal         func_2CDED0
label_2d1990:
    if (ctx->pc == 0x2D1990u) {
        ctx->pc = 0x2D1994u;
        goto label_2d1994;
    }
    ctx->pc = 0x2D198Cu;
    SET_GPR_U32(ctx, 31, 0x2D1994u);
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1994u; }
        if (ctx->pc != 0x2D1994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1994u; }
        if (ctx->pc != 0x2D1994u) { return; }
    }
    ctx->pc = 0x2D1994u;
label_2d1994:
    // 0x2d1994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1998:
    // 0x2d1998: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d1998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d199c:
    // 0x2d199c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d199cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d19a0:
    // 0x2d19a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d19a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d19a4:
    // 0x2d19a4: 0x3e00008  jr          $ra
label_2d19a8:
    if (ctx->pc == 0x2D19A8u) {
        ctx->pc = 0x2D19A8u;
            // 0x2d19a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D19ACu;
        goto label_fallthrough_0x2d19a4;
    }
    ctx->pc = 0x2D19A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D19A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D19A4u;
            // 0x2d19a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d19a4:
    ctx->pc = 0x2D19ACu;
}
