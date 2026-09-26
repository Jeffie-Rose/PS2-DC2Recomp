#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnterTexture__17mgCTextureManagerFiPcP8TM2_headii
// Address: 0x12d8a0 - 0x12da84
void EnterTexture__17mgCTextureManagerFiPcP8TM2_headii_0x12d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnterTexture__17mgCTextureManagerFiPcP8TM2_headii_0x12d8a0");
#endif

    switch (ctx->pc) {
        case 0x12d8ecu: goto label_12d8ec;
        case 0x12d998u: goto label_12d998;
        case 0x12da08u: goto label_12da08;
        case 0x12da5cu: goto label_12da5c;
        default: break;
    }

    ctx->pc = 0x12d8a0u;

    // 0x12d8a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12d8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12d8a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12d8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12d8a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x12d8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x12d8ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x12d8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x12d8b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12d8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x12d8b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12d8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12d8b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12d8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12d8bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12d8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12d8c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12d8c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12d8c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8c8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12d8c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8cc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12d8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8d0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x12d8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8d4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x12d8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8d8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x12d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x12d8dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x12d8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d8e4: 0xc049c18  jal         func_127060
    ctx->pc = 0x12D8E4u;
    SET_GPR_U32(ctx, 31, 0x12D8ECu);
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D8ECu; }
        if (ctx->pc != 0x12D8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D8ECu; }
        if (ctx->pc != 0x12D8ECu) { return; }
    }
    ctx->pc = 0x12D8ECu;
label_12d8ec:
    // 0x12d8ec: 0xa3a0009c  sb          $zero, 0x9C($sp)
    ctx->pc = 0x12d8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d8f0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x12d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x12d8f4: 0x96480024  lhu         $t0, 0x24($s2)
    ctx->pc = 0x12d8f4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x12d8f8: 0x96490026  lhu         $t1, 0x26($s2)
    ctx->pc = 0x12d8f8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x12d8fc: 0x92440023  lbu         $a0, 0x23($s2)
    ctx->pc = 0x12d8fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
    // 0x12d900: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x12d900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12d904: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x12D904u;
    {
        const bool branch_taken_0x12d904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12d904) {
            ctx->pc = 0x12D970u;
            goto label_12d970;
        }
    }
    ctx->pc = 0x12D90Cu;
    // 0x12d90c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x12d90cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d910: 0x108a0015  beq         $a0, $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x12D910u;
    {
        const bool branch_taken_0x12d910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        if (branch_taken_0x12d910) {
            ctx->pc = 0x12D968u;
            goto label_12d968;
        }
    }
    ctx->pc = 0x12D918u;
    // 0x12d918: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12d918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12d91c: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12D91Cu;
    {
        const bool branch_taken_0x12d91c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12d91c) {
            ctx->pc = 0x12D95Cu;
            goto label_12d95c;
        }
    }
    ctx->pc = 0x12D924u;
    // 0x12d924: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12d924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12d928: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D928u;
    {
        const bool branch_taken_0x12d928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12d928) {
            ctx->pc = 0x12D950u;
            goto label_12d950;
        }
    }
    ctx->pc = 0x12D930u;
    // 0x12d930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d934: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D934u;
    {
        const bool branch_taken_0x12d934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12d934) {
            ctx->pc = 0x12D944u;
            goto label_12d944;
        }
    }
    ctx->pc = 0x12D93Cu;
    // 0x12d93c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12D93Cu;
    {
        const bool branch_taken_0x12d93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d93c) {
            ctx->pc = 0x12D97Cu;
            goto label_12d97c;
        }
    }
    ctx->pc = 0x12D944u;
label_12d944:
    // 0x12d944: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x12d944u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d948: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12D948u;
    {
        const bool branch_taken_0x12d948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d948) {
            ctx->pc = 0x12D988u;
            goto label_12d988;
        }
    }
    ctx->pc = 0x12D950u;
label_12d950:
    // 0x12d950: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x12d950u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12d954: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12D954u;
    {
        const bool branch_taken_0x12d954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d954) {
            ctx->pc = 0x12D988u;
            goto label_12d988;
        }
    }
    ctx->pc = 0x12D95Cu;
label_12d95c:
    // 0x12d95c: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x12d95cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12d960: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12D960u;
    {
        const bool branch_taken_0x12d960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d960) {
            ctx->pc = 0x12D988u;
            goto label_12d988;
        }
    }
    ctx->pc = 0x12D968u;
label_12d968:
    // 0x12d968: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12D968u;
    {
        const bool branch_taken_0x12d968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d968) {
            ctx->pc = 0x12D988u;
            goto label_12d988;
        }
    }
    ctx->pc = 0x12D970u;
label_12d970:
    // 0x12d970: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x12d970u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12d974: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12D974u;
    {
        const bool branch_taken_0x12d974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d974) {
            ctx->pc = 0x12D988u;
            goto label_12d988;
        }
    }
    ctx->pc = 0x12D97Cu;
label_12d97c:
    // 0x12d97c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12d97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d980: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x12D980u;
    {
        const bool branch_taken_0x12d980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d980) {
            ctx->pc = 0x12DA5Cu;
            goto label_12da5c;
        }
    }
    ctx->pc = 0x12D988u;
label_12d988:
    // 0x12d988: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12d988u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d98c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12d98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d990: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12D990u;
    {
        const bool branch_taken_0x12d990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d990) {
            ctx->pc = 0x12D9A8u;
            goto label_12d9a8;
        }
    }
    ctx->pc = 0x12D998u;
label_12d998:
    // 0x12d998: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x12d998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12d99c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x12d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x12d9a0: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x12d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
    // 0x12d9a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12d9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12d9a8:
    // 0x12d9a8: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x12d9a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12d9ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D9ACu;
    {
        const bool branch_taken_0x12d9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d9ac) {
            ctx->pc = 0x12D998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d998;
        }
    }
    ctx->pc = 0x12D9B4u;
    // 0x12d9b4: 0x16000020  bnez        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12D9B4u;
    {
        const bool branch_taken_0x12d9b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d9b4) {
            ctx->pc = 0x12DA38u;
            goto label_12da38;
        }
    }
    ctx->pc = 0x12D9BCu;
    // 0x12d9bc: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x12d9bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12d9c0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x12d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12d9c4: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x12d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x12d9c8: 0x29410009  slti        $at, $t2, 0x9
    ctx->pc = 0x12d9c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x12d9cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D9CCu;
    {
        const bool branch_taken_0x12d9cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d9cc) {
            ctx->pc = 0x12D9E0u;
            goto label_12d9e0;
        }
    }
    ctx->pc = 0x12D9D4u;
    // 0x12d9d4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x12d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12d9d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x12d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12d9dc: 0x835821  addu        $t3, $a0, $v1
    ctx->pc = 0x12d9dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_12d9e0:
    // 0x12d9e0: 0x90430011  lbu         $v1, 0x11($v0)
    ctx->pc = 0x12d9e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x12d9e4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x12d9e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12d9e8: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x12D9E8u;
    {
        const bool branch_taken_0x12d9e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d9e8) {
            ctx->pc = 0x12DA38u;
            goto label_12da38;
        }
    }
    ctx->pc = 0x12D9F0u;
    // 0x12d9f0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x12d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12d9f4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x12d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x12d9f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x12d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12d9fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12d9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12da00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12DA00u;
    {
        const bool branch_taken_0x12da00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12da00) {
            ctx->pc = 0x12DA24u;
            goto label_12da24;
        }
    }
    ctx->pc = 0x12DA08u;
label_12da08:
    // 0x12da08: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x12da08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12da0c: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x12da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x12da10: 0xac640080  sw          $a0, 0x80($v1)
    ctx->pc = 0x12da10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 4));
    // 0x12da14: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x12da14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12da18: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x12da18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x12da1c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x12da1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12da20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12da20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12da24:
    // 0x12da24: 0x0  nop
    ctx->pc = 0x12da24u;
    // NOP
    // 0x12da28: 0x90430011  lbu         $v1, 0x11($v0)
    ctx->pc = 0x12da28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x12da2c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x12da2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12da30: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x12DA30u;
    {
        const bool branch_taken_0x12da30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12da30) {
            ctx->pc = 0x12DA08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12da08;
        }
    }
    ctx->pc = 0x12DA38u;
label_12da38:
    // 0x12da38: 0xdc420020  ld          $v0, 0x20($v0)
    ctx->pc = 0x12da38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x12da3c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x12da3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x12da40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12da40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12da44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12da44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12da48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da4c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12da4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da50: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x12da50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12da54: 0xc04b450  jal         func_12D140
    ctx->pc = 0x12DA54u;
    SET_GPR_U32(ctx, 31, 0x12DA5Cu);
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DA5Cu; }
        if (ctx->pc != 0x12DA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DA5Cu; }
        if (ctx->pc != 0x12DA5Cu) { return; }
    }
    ctx->pc = 0x12DA5Cu;
label_12da5c:
    // 0x12da5c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12da5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12da60: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x12da60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12da64: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x12da64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12da68: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12da68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12da6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12da6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12da70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12da70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12da74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12da74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12da78: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x12da78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12da7c: 0x3e00008  jr          $ra
    ctx->pc = 0x12DA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12DA84u;
}
