#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LinkConnectCheck__11CAutoMapGenFiiiii
// Address: 0x1d5e50 - 0x1d6050
void LinkConnectCheck__11CAutoMapGenFiiiii_0x1d5e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LinkConnectCheck__11CAutoMapGenFiiiii_0x1d5e50");
#endif

    switch (ctx->pc) {
        case 0x1d6034u: goto label_1d6034;
        default: break;
    }

    ctx->pc = 0x1d5e50u;

    // 0x1d5e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5e54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5e5c: 0x11230018  beq         $t1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D5E5Cu;
    {
        const bool branch_taken_0x1d5e5c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D5E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E5Cu;
            // 0x1d5e60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e5c) {
            ctx->pc = 0x1D5EC0u;
            goto label_1d5ec0;
        }
    }
    ctx->pc = 0x1D5E64u;
    // 0x1d5e64: 0x18c00017  blez        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D5E64u;
    {
        const bool branch_taken_0x1d5e64 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1D5E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5E64u;
            // 0x1d5e68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e64) {
            ctx->pc = 0x1D5EC4u;
            goto label_1d5ec4;
        }
    }
    ctx->pc = 0x1D5E6Cu;
    // 0x1d5e6c: 0x848a01b8  lh          $t2, 0x1B8($a0)
    ctx->pc = 0x1d5e6cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d5e70: 0x24cbffff  addiu       $t3, $a2, -0x1
    ctx->pc = 0x1d5e70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d5e74: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1d5e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d5e78: 0x8c8d01cc  lw          $t5, 0x1CC($a0)
    ctx->pc = 0x1d5e78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d5e7c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1d5e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d5e80: 0x36080  sll         $t4, $v1, 2
    ctx->pc = 0x1d5e80u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5e84: 0x16a5018  mult        $t2, $t3, $t2
    ctx->pc = 0x1d5e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1d5e88: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x1d5e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d5e8c: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x1d5e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d5e90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5e94: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x1d5e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1d5e98: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1d5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1d5e9c: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x1d5e9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5ea0: 0x846a0008  lh          $t2, 0x8($v1)
    ctx->pc = 0x1d5ea0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d5ea4: 0x1671824  and         $v1, $t3, $a3
    ctx->pc = 0x1d5ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1d5ea8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5EA8u;
    {
        const bool branch_taken_0x1d5ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ea8) {
            ctx->pc = 0x1D5EC0u;
            goto label_1d5ec0;
        }
    }
    ctx->pc = 0x1D5EB0u;
    // 0x1d5eb0: 0x11480003  beq         $t2, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5EB0u;
    {
        const bool branch_taken_0x1d5eb0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x1D5EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5EB0u;
            // 0x1d5eb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5eb0) {
            ctx->pc = 0x1D5EC0u;
            goto label_1d5ec0;
        }
    }
    ctx->pc = 0x1D5EB8u;
    // 0x1d5eb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5ebc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1d5ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1d5ec0:
    // 0x1d5ec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d5ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5ec4:
    // 0x1d5ec4: 0x1123001e  beq         $t1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D5EC4u;
    {
        const bool branch_taken_0x1d5ec4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D5EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5EC4u;
            // 0x1d5ec8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ec4) {
            ctx->pc = 0x1D5F40u;
            goto label_1d5f40;
        }
    }
    ctx->pc = 0x1D5ECCu;
    // 0x1d5ecc: 0x848301ba  lh          $v1, 0x1BA($a0)
    ctx->pc = 0x1d5eccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 442)));
    // 0x1d5ed0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d5ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d5ed4: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x1d5ed4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d5ed8: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D5ED8u;
    {
        const bool branch_taken_0x1d5ed8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ed8) {
            ctx->pc = 0x1D5F3Cu;
            goto label_1d5f3c;
        }
    }
    ctx->pc = 0x1D5EE0u;
    // 0x1d5ee0: 0x848a01b8  lh          $t2, 0x1B8($a0)
    ctx->pc = 0x1d5ee0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d5ee4: 0x24cb0001  addiu       $t3, $a2, 0x1
    ctx->pc = 0x1d5ee4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d5ee8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1d5ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d5eec: 0x8c8d01cc  lw          $t5, 0x1CC($a0)
    ctx->pc = 0x1d5eecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d5ef0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1d5ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d5ef4: 0x36080  sll         $t4, $v1, 2
    ctx->pc = 0x1d5ef4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5ef8: 0x16a5018  mult        $t2, $t3, $t2
    ctx->pc = 0x1d5ef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1d5efc: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x1d5efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d5f00: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x1d5f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d5f04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d5f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5f08: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x1d5f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1d5f0c: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1d5f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1d5f10: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x1d5f10u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5f14: 0x846a0008  lh          $t2, 0x8($v1)
    ctx->pc = 0x1d5f14u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d5f18: 0x1671824  and         $v1, $t3, $a3
    ctx->pc = 0x1d5f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1d5f1c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5F1Cu;
    {
        const bool branch_taken_0x1d5f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f1c) {
            ctx->pc = 0x1D5F3Cu;
            goto label_1d5f3c;
        }
    }
    ctx->pc = 0x1D5F24u;
    // 0x1d5f24: 0x11480005  beq         $t2, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5F24u;
    {
        const bool branch_taken_0x1d5f24 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x1D5F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F24u;
            // 0x1d5f28: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f24) {
            ctx->pc = 0x1D5F3Cu;
            goto label_1d5f3c;
        }
    }
    ctx->pc = 0x1D5F2Cu;
    // 0x1d5f2c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1d5f2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5f30: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1d5f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1d5f34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5f38: 0xac6a0010  sw          $t2, 0x10($v1)
    ctx->pc = 0x1d5f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
label_1d5f3c:
    // 0x1d5f3c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1d5f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d5f40:
    // 0x1d5f40: 0x1123001c  beq         $t1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D5F40u;
    {
        const bool branch_taken_0x1d5f40 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D5F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F40u;
            // 0x1d5f44: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f40) {
            ctx->pc = 0x1D5FB4u;
            goto label_1d5fb4;
        }
    }
    ctx->pc = 0x1D5F48u;
    // 0x1d5f48: 0x848a01b8  lh          $t2, 0x1B8($a0)
    ctx->pc = 0x1d5f48u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d5f4c: 0x2543ffff  addiu       $v1, $t2, -0x1
    ctx->pc = 0x1d5f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1d5f50: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1d5f50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d5f54: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D5F54u;
    {
        const bool branch_taken_0x1d5f54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f54) {
            ctx->pc = 0x1D5FB0u;
            goto label_1d5fb0;
        }
    }
    ctx->pc = 0x1D5F5Cu;
    // 0x1d5f5c: 0xca5018  mult        $t2, $a2, $t2
    ctx->pc = 0x1d5f5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1d5f60: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1d5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d5f64: 0x8c8c01cc  lw          $t4, 0x1CC($a0)
    ctx->pc = 0x1d5f64u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d5f68: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1d5f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d5f6c: 0x35880  sll         $t3, $v1, 2
    ctx->pc = 0x1d5f6cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5f70: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x1d5f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d5f74: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x1d5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d5f78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d5f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5f7c: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1d5f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1d5f80: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x1d5f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1d5f84: 0x8c6b001c  lw          $t3, 0x1C($v1)
    ctx->pc = 0x1d5f84u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1d5f88: 0x846a0024  lh          $t2, 0x24($v1)
    ctx->pc = 0x1d5f88u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1d5f8c: 0x1671824  and         $v1, $t3, $a3
    ctx->pc = 0x1d5f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1d5f90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5F90u;
    {
        const bool branch_taken_0x1d5f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f90) {
            ctx->pc = 0x1D5FB0u;
            goto label_1d5fb0;
        }
    }
    ctx->pc = 0x1D5F98u;
    // 0x1d5f98: 0x11480005  beq         $t2, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5F98u;
    {
        const bool branch_taken_0x1d5f98 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x1D5F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5F98u;
            // 0x1d5f9c: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f98) {
            ctx->pc = 0x1D5FB0u;
            goto label_1d5fb0;
        }
    }
    ctx->pc = 0x1D5FA0u;
    // 0x1d5fa0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d5fa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d5fa4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1d5fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1d5fa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5fac: 0xac6a0010  sw          $t2, 0x10($v1)
    ctx->pc = 0x1d5facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
label_1d5fb0:
    // 0x1d5fb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d5fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d5fb4:
    // 0x1d5fb4: 0x11230019  beq         $t1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5FB4u;
    {
        const bool branch_taken_0x1d5fb4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d5fb4) {
            ctx->pc = 0x1D601Cu;
            goto label_1d601c;
        }
    }
    ctx->pc = 0x1D5FBCu;
    // 0x1d5fbc: 0x18a00017  blez        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D5FBCu;
    {
        const bool branch_taken_0x1d5fbc = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1d5fbc) {
            ctx->pc = 0x1D601Cu;
            goto label_1d601c;
        }
    }
    ctx->pc = 0x1D5FC4u;
    // 0x1d5fc4: 0x848901b8  lh          $t1, 0x1B8($a0)
    ctx->pc = 0x1d5fc4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d5fc8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1d5fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d5fcc: 0x8c8a01cc  lw          $t2, 0x1CC($a0)
    ctx->pc = 0x1d5fccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d5fd0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1d5fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d5fd4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1d5fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5fd8: 0xc92018  mult        $a0, $a2, $t1
    ctx->pc = 0x1d5fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d5fdc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1d5fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d5fe0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d5fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5fe4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d5fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5fe8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1d5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d5fec: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1d5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d5ff0: 0x8c65ffe4  lw          $a1, -0x1C($v1)
    ctx->pc = 0x1d5ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967268)));
    // 0x1d5ff4: 0x8464ffec  lh          $a0, -0x14($v1)
    ctx->pc = 0x1d5ff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967276)));
    // 0x1d5ff8: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x1d5ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x1d5ffc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5FFCu;
    {
        const bool branch_taken_0x1d5ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ffc) {
            ctx->pc = 0x1D601Cu;
            goto label_1d601c;
        }
    }
    ctx->pc = 0x1D6004u;
    // 0x1d6004: 0x10880005  beq         $a0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6004u;
    {
        const bool branch_taken_0x1d6004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x1D6008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6004u;
            // 0x1d6008: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6004) {
            ctx->pc = 0x1D601Cu;
            goto label_1d601c;
        }
    }
    ctx->pc = 0x1D600Cu;
    // 0x1d600c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1d600cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d6010: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1d6010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1d6014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d6014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d6018: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1d6018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_1d601c:
    // 0x1d601c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D601Cu;
    {
        const bool branch_taken_0x1d601c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D6020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D601Cu;
            // 0x1d6020: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d601c) {
            ctx->pc = 0x1D602Cu;
            goto label_1d602c;
        }
    }
    ctx->pc = 0x1D6024u;
    // 0x1d6024: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6024u;
    {
        const bool branch_taken_0x1d6024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6024u;
            // 0x1d6028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6024) {
            ctx->pc = 0x1D6044u;
            goto label_1d6044;
        }
    }
    ctx->pc = 0x1D602Cu;
label_1d602c:
    // 0x1d602c: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D602Cu;
    SET_GPR_U32(ctx, 31, 0x1D6034u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6034u; }
        if (ctx->pc != 0x1D6034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6034u; }
        if (ctx->pc != 0x1D6034u) { return; }
    }
    ctx->pc = 0x1D6034u;
label_1d6034:
    // 0x1d6034: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6038: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1d6038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d603c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1d603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d6040: 0x0  nop
    ctx->pc = 0x1d6040u;
    // NOP
label_1d6044:
    // 0x1d6044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6048: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D604Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6048u;
            // 0x1d604c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6050u;
}
