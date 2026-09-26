#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: viBufAddDMA__FP5ViBuf
// Address: 0x29a020 - 0x29a22c
void viBufAddDMA__FP5ViBuf_0x29a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufAddDMA__FP5ViBuf_0x29a020");
#endif

    switch (ctx->pc) {
        case 0x29a040u: goto label_29a040;
        case 0x29a058u: goto label_29a058;
        case 0x29a068u: goto label_29a068;
        case 0x29a080u: goto label_29a080;
        case 0x29a164u: goto label_29a164;
        case 0x29a174u: goto label_29a174;
        case 0x29a1a8u: goto label_29a1a8;
        case 0x29a20cu: goto label_29a20c;
        case 0x29a214u: goto label_29a214;
        default: break;
    }

    ctx->pc = 0x29a020u;

    // 0x29a020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29a020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29a024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29a024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29a028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29a02c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a030: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29a030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a034: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x29a034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x29a038: 0xc044048  jal         func_110120
    ctx->pc = 0x29A038u;
    SET_GPR_U32(ctx, 31, 0x29A040u);
    ctx->pc = 0x29A03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A038u;
            // 0x29a03c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A040u; }
        if (ctx->pc != 0x29A040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A040u; }
        if (ctx->pc != 0x29A040u) { return; }
    }
    ctx->pc = 0x29A040u;
label_29a040:
    // 0x29a040: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x29a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x29a044: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29A044u;
    {
        const bool branch_taken_0x29a044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A044u;
            // 0x29a048: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a044) {
            ctx->pc = 0x29A060u;
            goto label_29a060;
        }
    }
    ctx->pc = 0x29A04Cu;
    // 0x29a04c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x29a050: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x29A050u;
    SET_GPR_U32(ctx, 31, 0x29A058u);
    ctx->pc = 0x29A054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A050u;
            // 0x29a054: 0x2484de10  addiu       $a0, $a0, -0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A058u; }
        if (ctx->pc != 0x29A058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A058u; }
        if (ctx->pc != 0x29A058u) { return; }
    }
    ctx->pc = 0x29A058u;
label_29a058:
    // 0x29a058: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x29A058u;
    {
        const bool branch_taken_0x29a058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A058u;
            // 0x29a05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a058) {
            ctx->pc = 0x29A218u;
            goto label_29a218;
        }
    }
    ctx->pc = 0x29A060u;
label_29a060:
    // 0x29a060: 0xc0a6718  jal         func_299C60
    ctx->pc = 0x29A060u;
    SET_GPR_U32(ctx, 31, 0x29A068u);
    ctx->pc = 0x299C60u;
    if (runtime->hasFunction(0x299C60u)) {
        auto targetFn = runtime->lookupFunction(0x299C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A068u; }
        if (ctx->pc != 0x29A068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR__FUi_0x299c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A068u; }
        if (ctx->pc != 0x29A068u) { return; }
    }
    ctx->pc = 0x29A068u;
label_29a068:
    // 0x29a068: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a06c: 0x8c29b400  lw          $t1, -0x4C00($at)
    ctx->pc = 0x29a06cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947840)));
    // 0x29a070: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a074: 0x8c25b410  lw          $a1, -0x4BF0($at)
    ctx->pc = 0x29a074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947856)));
    // 0x29a078: 0xc0a66ec  jal         func_299BB0
    ctx->pc = 0x29A078u;
    SET_GPR_U32(ctx, 31, 0x29A080u);
    ctx->pc = 0x29A07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A078u;
            // 0x29a07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299BB0u;
    if (runtime->hasFunction(0x299BB0u)) {
        auto targetFn = runtime->lookupFunction(0x299BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A080u; }
        if (ctx->pc != 0x29A080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex__FP5ViBufPv_0x299bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A080u; }
        if (ctx->pc != 0x29A080u) { return; }
    }
    ctx->pc = 0x29A080u;
label_29a080:
    // 0x29a080: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29a080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29a084: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x29a084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29a088: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29a088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29a08c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x29a08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29a090: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A090u;
    {
        const bool branch_taken_0x29a090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A090u;
            // 0x29a094: 0x44001a  div         $zero, $v0, $a0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a090) {
            ctx->pc = 0x29A09Cu;
            goto label_29a09c;
        }
    }
    ctx->pc = 0x29A098u;
    // 0x29a098: 0x1cd  break       0, 7
    ctx->pc = 0x29a098u;
    runtime->handleBreak(rdram, ctx);
label_29a09c:
    // 0x29a09c: 0x1810  mfhi        $v1
    ctx->pc = 0x29a09cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29a0a0: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x29a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29a0a4: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A0A4u;
    {
        const bool branch_taken_0x29a0a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A0A4u;
            // 0x29a0a8: 0x44001a  div         $zero, $v0, $a0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a0a4) {
            ctx->pc = 0x29A0B0u;
            goto label_29a0b0;
        }
    }
    ctx->pc = 0x29A0ACu;
    // 0x29a0ac: 0x1cd  break       0, 7
    ctx->pc = 0x29a0acu;
    runtime->handleBreak(rdram, ctx);
label_29a0b0:
    // 0x29a0b0: 0x1010  mfhi        $v0
    ctx->pc = 0x29a0b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x29a0b4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x29a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x29a0b8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x29a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29a0bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x29a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a0c0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x29a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x29a0c4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x29a0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29a0c8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x29a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29a0cc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x29a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29a0d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x29a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29a0d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A0D4u;
    {
        const bool branch_taken_0x29a0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A0D4u;
            // 0x29a0d8: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a0d4) {
            ctx->pc = 0x29A0E0u;
            goto label_29a0e0;
        }
    }
    ctx->pc = 0x29A0DCu;
    // 0x29a0dc: 0x1cd  break       0, 7
    ctx->pc = 0x29a0dcu;
    runtime->handleBreak(rdram, ctx);
label_29a0e0:
    // 0x29a0e0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x29a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x29a0e4: 0x5010  mfhi        $t2
    ctx->pc = 0x29a0e4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x29a0e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A0E8u;
    {
        const bool branch_taken_0x29a0e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x29A0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A0E8u;
            // 0x29a0ec: 0x312c3  sra         $v0, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a0e8) {
            ctx->pc = 0x29A0F8u;
            goto label_29a0f8;
        }
    }
    ctx->pc = 0x29A0F0u;
    // 0x29a0f0: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x29a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x29a0f4: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x29a0f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_29a0f8:
    // 0x29a0f8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x29a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x29a0fc: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A0FCu;
    {
        const bool branch_taken_0x29a0fc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x29A100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A0FCu;
            // 0x29a100: 0x308307ff  andi        $v1, $a0, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a0fc) {
            ctx->pc = 0x29A110u;
            goto label_29a110;
        }
    }
    ctx->pc = 0x29A104u;
    // 0x29a104: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A104u;
    {
        const bool branch_taken_0x29a104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a104) {
            ctx->pc = 0x29A110u;
            goto label_29a110;
        }
    }
    ctx->pc = 0x29A10Cu;
    // 0x29a10c: 0x2463f800  addiu       $v1, $v1, -0x800
    ctx->pc = 0x29a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
label_29a110:
    // 0x29a110: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x29A110u;
    {
        const bool branch_taken_0x29a110 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29A114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A110u;
            // 0x29a114: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a110) {
            ctx->pc = 0x29A168u;
            goto label_29a168;
        }
    }
    ctx->pc = 0x29A118u;
    // 0x29a118: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x29a118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29a11c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x29a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29a120: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x29a120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29a124: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x29a124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29a128: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29a128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29a12c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x29a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29a130: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A130u;
    {
        const bool branch_taken_0x29a130 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A130u;
            // 0x29a134: 0x65001a  div         $zero, $v1, $a1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a130) {
            ctx->pc = 0x29A13Cu;
            goto label_29a13c;
        }
    }
    ctx->pc = 0x29A138u;
    // 0x29a138: 0x1cd  break       0, 7
    ctx->pc = 0x29a138u;
    runtime->handleBreak(rdram, ctx);
label_29a13c:
    // 0x29a13c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x29a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29a140: 0x1810  mfhi        $v1
    ctx->pc = 0x29a140u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29a144: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x29a144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29a148: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x29a148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a14c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x29a14cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x29a150: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x29a150u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29a154: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x29a154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x29a158: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x29a158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x29a15c: 0xc0a6734  jal         func_299CD0
    ctx->pc = 0x29A15Cu;
    SET_GPR_U32(ctx, 31, 0x29A164u);
    ctx->pc = 0x29A160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A15Cu;
            // 0x29a160: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299CD0u;
    if (runtime->hasFunction(0x299CD0u)) {
        auto targetFn = runtime->lookupFunction(0x299CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A164u; }
        if (ctx->pc != 0x29A164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scTag2__FP5QWORDPvUiUi_0x299cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A164u; }
        if (ctx->pc != 0x29A164u) { return; }
    }
    ctx->pc = 0x29A164u;
label_29a164:
    // 0x29a164: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x29a164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a168:
    // 0x29a168: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x29a168u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29a16c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x29A16Cu;
    {
        const bool branch_taken_0x29a16c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A16Cu;
            // 0x29a170: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a16c) {
            ctx->pc = 0x29A1D0u;
            goto label_29a1d0;
        }
    }
    ctx->pc = 0x29A174u;
label_29a174:
    // 0x29a174: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x29a174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29a178: 0xa3900  sll         $a3, $t2, 4
    ctx->pc = 0x29a178u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x29a17c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x29a17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29a180: 0xa2ac0  sll         $a1, $t2, 11
    ctx->pc = 0x29a180u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 11));
    // 0x29a184: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x29a184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29a188: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x29a188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x29a18c: 0x15630003  bne         $t3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A18Cu;
    {
        const bool branch_taken_0x29a18c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        ctx->pc = 0x29A190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A18Cu;
            // 0x29a190: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a18c) {
            ctx->pc = 0x29A19Cu;
            goto label_29a19c;
        }
    }
    ctx->pc = 0x29A194u;
    // 0x29a194: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A194u;
    {
        const bool branch_taken_0x29a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A194u;
            // 0x29a198: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a194) {
            ctx->pc = 0x29A1A0u;
            goto label_29a1a0;
        }
    }
    ctx->pc = 0x29A19Cu;
label_29a19c:
    // 0x29a19c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x29a19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29a1a0:
    // 0x29a1a0: 0xc0a6734  jal         func_299CD0
    ctx->pc = 0x29A1A0u;
    SET_GPR_U32(ctx, 31, 0x29A1A8u);
    ctx->pc = 0x29A1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A1A0u;
            // 0x29a1a4: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299CD0u;
    if (runtime->hasFunction(0x299CD0u)) {
        auto targetFn = runtime->lookupFunction(0x299CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A1A8u; }
        if (ctx->pc != 0x29A1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scTag2__FP5QWORDPvUiUi_0x299cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A1A8u; }
        if (ctx->pc != 0x29A1A8u) { return; }
    }
    ctx->pc = 0x29A1A8u;
label_29a1a8:
    // 0x29a1a8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x29a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29a1ac: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x29a1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x29a1b0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A1B0u;
    {
        const bool branch_taken_0x29a1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A1B0u;
            // 0x29a1b4: 0x83001a  div         $zero, $a0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1b0) {
            ctx->pc = 0x29A1BCu;
            goto label_29a1bc;
        }
    }
    ctx->pc = 0x29A1B8u;
    // 0x29a1b8: 0x1cd  break       0, 7
    ctx->pc = 0x29a1b8u;
    runtime->handleBreak(rdram, ctx);
label_29a1bc:
    // 0x29a1bc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x29a1bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x29a1c0: 0x5010  mfhi        $t2
    ctx->pc = 0x29a1c0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x29a1c4: 0x162182a  slt         $v1, $t3, $v0
    ctx->pc = 0x29a1c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29a1c8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x29A1C8u;
    {
        const bool branch_taken_0x29a1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a1c8) {
            ctx->pc = 0x29A174u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29a174;
        }
    }
    ctx->pc = 0x29A1D0u;
label_29a1d0:
    // 0x29a1d0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x29a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29a1d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a1d8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x29a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x29a1dc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x29a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29a1e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29A1E0u;
    {
        const bool branch_taken_0x29a1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a1e0) {
            ctx->pc = 0x29A20Cu;
            goto label_29a20c;
        }
    }
    ctx->pc = 0x29A1E8u;
    // 0x29a1e8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29A1E8u;
    {
        const bool branch_taken_0x29a1e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A1E8u;
            // 0x29a1ec: 0x35240100  ori         $a0, $t1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1e8) {
            ctx->pc = 0x29A204u;
            goto label_29a204;
        }
    }
    ctx->pc = 0x29A1F0u;
    // 0x29a1f0: 0x9193c  dsll32      $v1, $t1, 4
    ctx->pc = 0x29a1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 4));
    // 0x29a1f4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x29a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x29a1f8: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x29a1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x29a1fc: 0x624825  or          $t1, $v1, $v0
    ctx->pc = 0x29a1fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29a200: 0x35240100  ori         $a0, $t1, 0x100
    ctx->pc = 0x29a200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
label_29a204:
    // 0x29a204: 0xc0a6718  jal         func_299C60
    ctx->pc = 0x29A204u;
    SET_GPR_U32(ctx, 31, 0x29A20Cu);
    ctx->pc = 0x299C60u;
    if (runtime->hasFunction(0x299C60u)) {
        auto targetFn = runtime->lookupFunction(0x299C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A20Cu; }
        if (ctx->pc != 0x29A20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR__FUi_0x299c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A20Cu; }
        if (ctx->pc != 0x29A20Cu) { return; }
    }
    ctx->pc = 0x29A20Cu;
label_29a20c:
    // 0x29a20c: 0xc044040  jal         func_110100
    ctx->pc = 0x29A20Cu;
    SET_GPR_U32(ctx, 31, 0x29A214u);
    ctx->pc = 0x29A210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A20Cu;
            // 0x29a210: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A214u; }
        if (ctx->pc != 0x29A214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A214u; }
        if (ctx->pc != 0x29A214u) { return; }
    }
    ctx->pc = 0x29A214u;
label_29a214:
    // 0x29a214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a218:
    // 0x29a218: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29a218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a21c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a224: 0x3e00008  jr          $ra
    ctx->pc = 0x29A224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A224u;
            // 0x29a228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A22Cu;
}
